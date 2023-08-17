#include <stdio.h>

int *make_num() {
    int num = 8;
    return &num;
}

int main()
{
    int *num = make_num();

    printf("number create non-locally is: %d", *num);
}

