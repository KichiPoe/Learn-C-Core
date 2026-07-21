# Level-0 — Toolchain

These are the things I learned while understanding how a C program goes from source code to an executable.

---

# Lesson 0.1 — Development Environment

### Build command I used

```bash
gcc -Wall -Wextra src/main.c -o bin/hello.exe
```

Useful flags so far:

* `-o` → output file name
* `-Wall -Wextra` → enable useful warnings

### Things I learned

* `main()` is special. Even without `return 0;`, it still exits successfully.
* This rule is only for `main()`. Any other non-void function should return a value, otherwise GCC warns (`-Wall -Wextra`).
> Always treat `warnings` as `errors`.

---

# Lesson 0.2 — My First Program

### Things I learned

* Every program starts from `main()`.
* Without `main()`, compilation may succeed, but linking fails because there's no entry point.
* `stdio.h` is required before using `printf()`.
* `return 0;` simply means the program finished successfully.

### Small experiments

* Removed `return 0;` from `main()` → still worked.
* Renamed `main()` → linker failed (`undefined reference to WinMain`).
* Removed `#include <stdio.h>` → `printf()` wasn't recognized.

---

# Lesson 0.3 — Compilation Pipeline

I knew `gcc main.c -o program.exe` built the program.

I didn't know GCC actually performs multiple hidden steps.

### Commands

```bash
gcc -E main.c -o main.i
gcc -S main.i -o main.s
gcc -c main.s -o main.o
gcc main.o -o program.exe
```

### What each file is

* `.i` → after preprocessing
* `.s` → assembly
* `.o` → object file
* `.exe` → final executable

### Interesting observations

* `main.i` became huge because every included header was expanded.
* `#define` values were replaced before compilation.
* The weird lines like:

```text
# 5 "main.c"
```

are just markers so compiler errors can point back to the correct source line.

The executable is only created after linking object files with required libraries.

---

# Lesson 0.4 — Compiler Flags

### Flags I used

```bash
-Wall
-Wextra
-Werror
-pedantic
-std=c17
-g
-O0
-O2
```

### Notes

* `-Wall` + `-Wextra` should always be enabled while learning.
* `-Werror` treats warnings as build errors.
* `-std=c17` tells GCC which C standard to use.
* `-pedantic` keeps the code closer to standard C.
* `-g` is only for debugging information.
* `-O0` makes debugging easier.
* `-O2` optimizes the generated code. It doesn't always make the executable smaller.

Development build:

```bash
-std=c17 -Wall -Wextra -pedantic -g -O0
```

Release build:

```bash
-std=c17 -Wall -Wextra -pedantic -O2
```

---

# Lesson 0.5 — Reading Compiler Errors

### Things to remember

There are three kinds of messages:

* compiler errors
* warnings
* linker errors

Compiler errors stop compilation.

Linker errors happen after compilation, usually because something was declared but never defined.

Warnings don't stop the build unless `-Werror` is used.

### Workflow

Whenever I get lots of errors:

1. Read the first one.
2. Fix only that.
3. Compile again.

One mistake can easily create ten more errors.

---

# Lesson 0.6 — Debugging

Compiled with:

```bash
gcc -g -O0 main.c -o program.exe
```

Basic GDB commands I tried:

```text
run
break main
next
step
print variable
backtrace
quit
```

### Notes

* `next` stays in the current function.
* `step` enters called functions.
* `backtrace` shows how execution reached the current point.
* GDB prints memory addresses like `0x00007fff...`. I know they're memory locations, but I'll properly understand them when I study pointers and memory.

---

# Lesson 0.7 — Command Line Programs

### Things I learned

`argc` counts every argument, including the program name.

Example:

```text
program.exe hello world
```

gives:

```text
argc = 3
```

because:

```text
argv[0] = program.exe
argv[1] = hello
argv[2] = world
```

### Exit codes

* `0` usually means success.
* Any non-zero value usually means something went wrong.

The exact meaning is decided by the program itself.

The operating system and scripts can check this value to know whether the program succeeded.

---

# Lesson 0.8 — MyCalc Project

While building the calculator CLI, I came across a few new concepts.

### Command Line Arguments Are Text

Everything received through `argc` and `argv` comes as text.

Example:

```bash
mycalc add 10 20
```

Values:

```c
argv[1] = "add"
argv[2] = "10"
argv[3] = "20"
````

Numbers are still `strings` until converted.

### stdlib.h and atof()

`stdlib.h` provides utility functions.

Used: `atof()` to convert command line text into numbers.

Example:

```c
double value = atof(argv[2]);
```

> Note:
`atof()` does not properly report invalid input.
Better conversion methods will be learned later.

### strcmp()

Strings in C are arrays of characters.

Two strings can have the same content but exist at different memory locations.

Therefore, string comparison should use: `strcmp()`

Example:

```c
strcmp(argv[1], "add") == 0
```

returns true when both strings contain the same characters.

### void Functions

Functions that do not return anything use: `void`

Example:

```c
void print_help(void)
{
    printf("Help");
}
```

Modern C style:

```c
void function(void)
```

means the function takes no arguments.

Older C style:

```c
void function()
```

means the arguments are not specified.

### stdout, stderr and stdin

Programs have different input/output streams:

```
stdin  -> input
stdout -> normal output
stderr -> error output
```

Normal messages use:

```c
printf()
```

Errors use:

```c
fprintf(stderr, "error");
```

Keeping errors separate allows other programs or scripts to handle them differently.

### Logical Operators

Used:

```c
&&  -> AND
||  -> OR
```

Example:

```c
if (strcmp(argv[1], "-h") == 0 ||
    strcmp(argv[1], "--help") == 0)
```

Means:

Run this block if the command is either:

```bash
-h or --help
```

# Overall

Before Level 0, I only knew that `gcc main.c -o program.exe` produced an executable.

Now I know there's an entire pipeline behind it:

```text
*.c → *.i → *.s → *.o → *.exe
```

I also got comfortable using compiler warnings, reading compiler messages, running GDB, and writing simple command-line programs with `argc`, `argv`, and exit codes.
