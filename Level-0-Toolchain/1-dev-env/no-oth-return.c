#include <stdio.h>

int othFunc(void)
{
    // Intentionally left without a return statement.
}

int main(void)
{
    printf("Hello World! Without othFunc() Return\n");
}

// Program still runs because othFunc() is never called.
// GCC warns that a non-void function reaches the end without returning a value.