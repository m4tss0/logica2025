#include <stdio.h>
int main() {
    int C;
    char T;
    double M[12][12];
    double soma = 0.0;
    scanf("%d", &C);
    scanf(" %c", &T); 
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }
    for (int i = 0; i < 12; i++) {
        soma += M[i][C];
    }
    if (T == 'M') {
        soma /= 12.0;
    }
    printf("%.1lf\n", soma);
    return 0;
}