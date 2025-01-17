#include <stdio.h>

int main() {
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
    int hasil[11];
    int i, j = 0;

    for (i = 0; i < 11; i++) {
        if (data[i] % 2 == 0) {
            hasil[j] = data[i];
            j++;
        }
    }

    printf("Array hasil yang berisi nilai genap:\n");
    for (i = 0; i < j; i++) {
        printf("%d ", hasil[i]);
    }
    printf("\n");

    return 0;
}

