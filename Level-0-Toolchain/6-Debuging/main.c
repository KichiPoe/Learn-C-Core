#include <stdio.h>

int add(int a, int b)
{
    int result = a + b;
    return result;
}

int main(void)
{
    int x = 10;
    int y = 20;

    int sum = add(x, y);
    printf("Sum = %d\n", sum);

    return 0;
}

// Simple program used while learning GDB.
// Compile with -g -O0 before debugging.