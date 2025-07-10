#include <stdio.h>
#include <string.h>
int valido(int matriz[9][9]) {
    int i, j, k;
    for (i = 0; i < 9; i++) {
        int numeros[10] = {0};
        for (j = 0; j < 9; j++) {
            int num = matriz[i][j];
            if (num < 1 || num > 9 || numeros[num]) return 0;
            numeros[num] = 1;
        }
    }
    for (j = 0; j < 9; j++) {
        int numeros[10] = {0};
        for (i = 0; i < 9; i++) {
            int num = matriz[i][j];
            if (num < 1 || num > 9 || numeros[num]) return 0;
            numeros[num] = 1;
        }
    }
    for (int lin = 0; lin < 9; lin += 3) {
        for (int col = 0; col < 9; col += 3) {
            int numeros[10] = {0};
            for (i = lin; i < lin + 3; i++) {
                for (j = col; j < col + 3; j++) {
                    int num = matriz[i][j];
                    if (num < 1 || num > 9 || numeros[num]) return 0;
                    numeros[num] = 1;
                }
            }
        }
    }

    return 1;
}
int main() {
    int n, inst = 1;
    scanf("%d", &n);
    while (n--) {
        int matriz[9][9];
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }
        printf("Instancia %d\n", inst++);
        if (valido(matriz)) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
        printf("\n");
    }
    return 0;
}