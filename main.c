#include <stdio.h>

int main()
{
    int num = 4;
    printf("memory address: %p\n", &num);
    printf("size of ref: %lu\n", sizeof(&num));
}

