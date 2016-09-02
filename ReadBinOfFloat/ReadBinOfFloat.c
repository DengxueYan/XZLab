#include <stdio.h>

int main(void)
{
    union
    {
        float a;
        unsigned int b;
    } data;
    
    data.a = 100.25;
    printf("% 24.16f, %08X\n", data.a, data.b);

    data.a = -100.25;
    printf("% 24.16f, %08X\n", data.a, data.b);

    data.a = 1.2373046875;
    printf("% 24.16f, %08X\n", data.a, data.b);

    data.a = -1.2373046875;
    printf("% 24.16f, %08X\n", data.a, data.b);

    return 0;
}
