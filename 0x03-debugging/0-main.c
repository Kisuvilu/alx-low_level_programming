#include <stdio.h>

void positive_or_negative(int number) {
    if (number > 0) {
        printf("%d is positive.\n", number);
    } else if (number < 0) {
        printf("%d is negative.\n", number);
    } else {
        printf("0 is neither positive nor negative.\n");
    }
}

int main(void) {
    int i = 0;
    positive_or_negative(i);
    return 0;
}

