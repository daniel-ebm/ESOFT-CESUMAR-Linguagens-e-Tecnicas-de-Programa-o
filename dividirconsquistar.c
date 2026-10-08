#include <stdio.h>
#include <stdlib.h>

int compara_maior(int a, int b) {
    if (a < b) return b;
    else return a;
}

int main(int argc, char *argv[]) {
    int valor[10];
    int i, maior;

    for (i = 0; i < 10; i++) {
        scanf("%d", &valor[i]);
    }

    for (i = 1, maior = valor[0]; i <= 4; i += 2) {
        int temp = compara_maior(valor[i], valor[i+1]);
        maior = compara_maior(maior, temp);
    }

    printf("\nMaior entre os 5 primeiros: %d", maior);

    return 0;
}
