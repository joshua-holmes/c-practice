#include <stdio.h>

void someFunction(int arg)
{
    printf("Yay %d!\n", arg);
}

int main() {
    void (*pf)(int);
    pf = &someFunction;
    pf(5);
}
