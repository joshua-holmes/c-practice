#include <stdio.h>

void change_val_w_ref(int *num) {
    *num = 6;
    printf("val changed to 6: %d\n", *num);
}

void change_val_no_ref(int num) {
    num = 6;
    printf("val changed to 6: %d\n", num);
}

int main()
{
    int num = 5;
    printf("val is 5: %d\n", num);
    change_val_no_ref(num);
    printf("val after change: %d\n", num);
    change_val_w_ref(&num);
    printf("val after change: %d\n", num);
}

