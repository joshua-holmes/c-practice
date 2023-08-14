#include <stdio.h>
#include <string.h>

// print Fahrenheit-Celsius table
// for fahr = 0, 20, ..., 300

int main()
{
    char dest[6] = "Hello";
    printf("SIZE: %lu\n", sizeof(dest));
    char bob[3] = "ay";
    char src[20] = "World";
    strncat(dest, src, 5);
    printf("SIZE: %lu\n", sizeof(dest));


    for (int i = 0; i < 11; i++) {
        char thing = dest[i];
        printf("%d\t%c\t%d\t%lu\n", i, thing, thing, sizeof dest);
    }
}

