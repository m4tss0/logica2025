#include <stdio.h>
#include <string.h>
int main() {
    char risada[51];     
    char vogais[51];   
    int tam = 0;
    scanf("%s", risada);
    for (int i = 0; risada[i] != '\0'; i++) {
        char c = risada[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais[tam] = c;
            tam++;
        }
    }
    int engracada = 1;  
    for (int i = 0; i < tam / 2; i++) {
        if (vogais[i] != vogais[tam - 1 - i]) {
            engracada = 0;
            break;
        }
    }
    if (engracada) {
        printf("S\n");
    } else {
        printf("N\n");
    }
    return 0;
}