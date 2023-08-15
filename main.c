#include <stdio.h>

int main()
{
    int num = 5;
    int *nref = &num;
    *nref = 6;

    printf("%d\n", num);
    printf("%d\n", *nref);
    printf("%x\n", &num);
    printf("%x\n", nref);
}

