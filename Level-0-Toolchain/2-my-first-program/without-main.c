#include <stdio.h>

// main() intentionally renamed.
int start(void)
{
    return 0;
}

// Doesn't link.
// The program has no main() entry point, so the linker reports:
// undefined reference to `WinMain`