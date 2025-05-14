#include <stdio.h>
 
int main() {
    int n;
    int resto;
    int qtd[7];
    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    scanf("%d", &n);
    printf("%d\n", n);
    resto = n;
    for(int i = 0; i < 7; i++) {
        qtd[i] = resto/notas[i];
        resto = resto % notas[i];
    }
    printf("%d nota(s) de R$ 100,00\n", qtd[0]);
    printf("%d nota(s) de R$ 50,00\n", qtd[1]);
    printf("%d nota(s) de R$ 20,00\n", qtd[2]);
    printf("%d nota(s) de R$ 10,00\n", qtd[3]);
    printf("%d nota(s) de R$ 5,00\n", qtd[4]);
    printf("%d nota(s) de R$ 2,00\n", qtd[5]);
    printf("%d nota(s) de R$ 1,00\n", qtd[6]);
    return 0;
}