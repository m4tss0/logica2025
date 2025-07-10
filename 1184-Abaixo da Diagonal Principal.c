#include <stdio.h>
int main() {
    char O;
    double M[12][12];
    double soma = 0.0;
    int qtd = 0;
    scanf(" %c", &O); 
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }
    for (int i = 1; i < 12; i++) {
        for (int j = 0; j < i; j++) {
            soma += M[i][j];
            qtd++;
        }
    }
    if (O == 'M') {
        soma /= qtd;
    }
    printf("%.1lf\n", soma);
    return 0;
}