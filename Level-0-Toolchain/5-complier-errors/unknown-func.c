#include <stdio.h>

int main(void)
{
    // Calling a function that does not exist.
    print_message("Hello");
    return 0;
}

// Compiler does not know what print_message() is.
//
// Error:
// implicit declaration of function 'print_message'