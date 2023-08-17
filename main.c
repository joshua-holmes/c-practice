#include <stdio.h>

int main()
{
    const char *string = "hi";
    printf("memory address: %x\n", string);
    printf("size of ref: %lu\n", sizeof(string));
}

