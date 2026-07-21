#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Number of arguments: %d\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    // Return a custom exit code.
    // Check it afterwards using:
    // echo %ERRORLEVEL%
    return 5;
}

// Example:
//
// main.exe
// argc = 1
//
// main.exe apple
// argc = 2
//
// Exit code:
// echo %ERRORLEVEL%
// -> 5