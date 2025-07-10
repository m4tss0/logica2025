#include <stdio.h>
int main() {
    int p;
    scanf("%d", &p);
    double total = 0.0;
    for (int i = 0; i < p; i++) {
        int codigo, quantidade;
        scanf("%d %d", &codigo, &quantidade);
        double preco;
        switch(codigo) {
            case 1001: preco = 1.50; break;
            case 1002: preco = 2.50; break;
            case 1003: preco = 3.50; break;
            case 1004: preco = 4.50; break;
            case 1005: preco = 5.50; break;
            default: preco = 0.0; break; 
        }
        total += preco * quantidade;
    }
    printf("%.2lf\n", total);
    return 0;
}