// Header intentionally removed.
// #include <stdio.h>

int main(void)
{
    printf("Printing without header inlcude\n");
    return 0;
}

// Doesn't compile.
// The compiler doesn't know what printf() is because stdio.h wasn't included.