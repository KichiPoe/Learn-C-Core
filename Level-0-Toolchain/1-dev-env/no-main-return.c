#include <stdio.h>

int main(void)
{
    printf("Hello World! Without main() Return\n");
    // Intentionally omitted `return 0;`
}

// Still compiles and runs.
// Reaching the end of main() is treated as `return 0;`.