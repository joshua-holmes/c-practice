#include <stdio.h>
#include <string.h>

// print Fahrenheit-Celsius table
// for fahr = 0, 20, ..., 300

int main()
{
    // Length of array is 6, length of string is 5
    char dest[6] = "Hello";
    // Length of string to append to first string is also 5
    char src[20] = "World";
    printf("LEN: %lu\tSIZE: %lu\n", strlen(dest), sizeof(dest));

    // Behavior is undefined when appending a string to another string that is not large enough
    strncat(dest, src, 5);
    printf("LEN: %lu\tSIZE: %lu\n", strlen(dest), sizeof(dest));

    // Getting char at index 9 still works but is undefined behavior, due to original array not being this big
    printf("TEST: %c\n", dest[9]);
}

