#include <stdio.h>
#include <string.h>
int main() {
    int N; 
    char texto[51]; 
    int deslocamento;
    scanf("%d", &N);
    getchar(); 

    for (int caso = 0; caso < N; caso++) {
        fgets(texto, 51, stdin);
        int tam = strlen(texto);
        if (texto[tam - 1] == '\n') {
            texto[tam - 1] = '\0';
            tam--;
        }
        scanf("%d", &deslocamento);
        getchar(); 
        for (int i = 0; i < tam; i++) {
            texto[i] = texto[i] - deslocamento;
            if (texto[i] < 'A') {
                texto[i] = texto[i] + 26; 
            }
        }
        printf("%s\n", texto);
    }
    return 0;
}