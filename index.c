#include <stdio.h>

int main(void) {
    int value;
    printf("Son kiriting: ");
    scanf("%d", &value);
    if(value > 0) printf("Musbat son: %d\n", value);
    else if(value < 0) printf("Manfiy son: %d\n", value);
    else if(value == 0) printf("Neytral son: %d\n", value);
    return 0;
}
