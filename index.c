#include <stdio.h>

int main(void) {
    int value;
    printf("Son kiriting: ");
    scanf("%d", &value);

    int res = 0;
    for (int i = value - 1; i >= 1; i--) {
        if (i == value - 1) {
            res += value * i;
        } else {
            res *= i;
        }
    }
    printf("Faktorial natija: %d\n", res);

    return 0;
}
