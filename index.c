#include <stdio.h>

int main(void) {
    int value;
    printf("Son kiriting: ");
    scanf("%d", &value);

    int res = 0;
    for (int i = 0; i <= value; i++) {
        res += i;
        printf("%d\n", res);
    }
    printf("Natija: %d\n", res);

    return 0;
}
