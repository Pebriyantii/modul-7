#include <stdio.h>

int main() {
    int A[5];
    int i = 0, X;

    printf("Input bilangan (akhiri penginputan dengan '999'):\n");
    while (1) {
        scanf("%d", &X);
        if (i >= 5) {
            printf("\nArray penuh!\n");
            break;
        }
        if (X == 999) {
            printf("\nProgram berakhir.\n");
            break;
        }
        if (X % 2 == 0) {
            A[i] = X;
            i++;
        }
    }

    printf("Isi array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}

