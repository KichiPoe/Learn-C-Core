#include <stdio.h>

int main(void)
{
    // Declared only to see how different compiler flags react.
    int number;

    printf("Hello Compiler Flags\n");
    return 0;
}

// Compiles and runs.
//
// Without flags:
//   No warning.
//
// -Wall:
//   warning: unused variable 'number'
//
// -Wall -Wextra:
//   Same warning.
//
// -Wall -Wextra -Werror:
//   Warning becomes a compilation error.