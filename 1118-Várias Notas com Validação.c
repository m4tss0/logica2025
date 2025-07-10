#include <stdio.h>
int main() {
    double nota, nota1, nota2, media;
    int opcao;
    do {
        int notasVal = 0;
        while (notasVal < 2) {
            scanf("%lf", &nota);
            if (nota >= 0.0 && nota <= 10.0) {
                if (notasVal == 0)
                    nota1 = nota;
                else
                    nota2 = nota;
                notasVal++;
            } else {
                printf("nota invalida\n");
            }
        }
        media = (nota1 + nota2) / 2.0;
        printf("media = %.2lf\n", media);

        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &opcao);
        } while (opcao != 1 && opcao != 2);

    } while (opcao == 1);

    return 0;
}