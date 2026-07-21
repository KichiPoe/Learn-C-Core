#include <stdio.h>

int main(void)
{
    // Missing semicolon intentionally.
    printf("Hello Error Lab\n")
    return 0;
}

// Compilation fails because the C syntax is invalid.
//
// Error:
// expected ';' before 'return'
//
// Location format:
// line:column
// Example:
// 6:32 means line 6, column 32.