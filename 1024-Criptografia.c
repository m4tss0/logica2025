#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char texto[1001]; 
    scanf("%d", &N);
    getchar();
    for (int linha = 0; linha < N; linha++) {
        fgets(texto, 1001, stdin); 
        int tam = strlen(texto);
        if (texto[tam - 1] == '\n') {
            texto[tam - 1] = '\0';
            tam--;
        }
        for (int i = 0; i < tam; i++) {
            if ((texto[i] >= 'a' && texto[i] <= 'z') || 
                (texto[i] >= 'A' && texto[i] <= 'Z')) {
                texto[i] = texto[i] + 3;
            }
        }
        for (int i = 0; i < tam / 2; i++) {
            char temp = texto[i];
            texto[i] = texto[tam - 1 - i];
            texto[tam - 1 - i] = temp;
        }
        for (int i = tam / 2; i < tam; i++) {
            texto[i] = texto[i] - 1;
        }
        printf("%s\n", texto);
    }
    return 0;
}