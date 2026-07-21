#include <stdio.h>

// Only declaring the function.
// No actual implementation is provided.
void hello(void);

int main(void)
{
    hello();
    return 0;
}

// Compilation succeeds because the compiler knows hello() exists.
//
// Linking fails because the linker cannot find the actual function body.
//
// Error:
// undefined reference to `hello'