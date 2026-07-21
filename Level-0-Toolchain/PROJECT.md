# MyCalc — Command Line Calculator

---

# Project Overview

MyCalc is the first project built for the `Learn-C-Core` journey.

The purpose of this project was not only to make a calculator, but to apply what was learned in `Level 0`:

- compiling C programs
- using multiple source files
- working with command line arguments
- handling errors
- creating a small structured program

---

# Features

Supported operations:

```
add
sub
mul
div
pow
mod
sqrt
```

Examples:

```bash
mycalc add 10 20
mycalc sub 50 20
mycalc mul 5 6
mycalc div 60 2
mycalc pow 2 8
mycalc mod 10 3
mycalc sqrt 25
```

---

# Command Options

```bash
# Shows available commands and usage.
mycalc -h
mycalc --help

# Shows project information.
mycalc -d
mycalc --dev

# Shows current version.
mycalc -v
mycalc --version
```

---

# Project Structure

```
8-mycalc/

├── include/
│   └── calculator.h
│
├── src/
│   ├── main.c
│   └── calculator.c
│
└── bin/
    └── mycalc.exe
```

---

# File Responsibilities

## main.c

Handles:

* command line arguments
* command checking
* user messages
* program flow

---

## calculator.c

Contains:

* add()
* sub()
* mul()
* divide()
* power()
* modulus()
* square_root()

---

## calculator.h

Contains function declarations used by other files.

---

# Error Handling

The program handles common mistakes:

* no command provided
* missing operands
* unknown commands
* invalid usage

Example:

```bash
mycalc abc
```

Output:

```
mycalc: unknown command 'abc'
Try 'mycalc --help' for more information.
```

---

# Build Command

Current build:

```bash
gcc src/main.c src/calculator.c -o bin/mycalc.exe
```

---

# Things Learned From This Project

This project helped me understand:

* how command line programs work
* how `argc` and `argv` are used
* why header files are needed
* basic error handling in C
* using return values as exit codes

---

# Status

Completed as the `Level 0` project.

The focus was learning the C workflow and building a working program, not making a production calculator.
