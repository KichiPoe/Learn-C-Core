#include <stdio.h>

#define MESSAGE "Hello Pipeline"

int main(void)
{
    printf("%s\n", MESSAGE);
    return 0;
}

// Used to inspect each compilation stage.
// MESSAGE gets replaced during preprocessing.