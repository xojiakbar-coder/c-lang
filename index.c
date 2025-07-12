#include <stdio.h>

int main(void) {
    int value;
    printf("Son kiriting: ");
    scanf("%d", &value);
    if(value % 2 == 0) printf("Juft son: %d\n", value);
    else printf("Toq son: %d\n", value);
    return 0;
}
