int main() {
    int N;
    while (scanf("%d", &N) == 1 && N != 0) {
        int resolvido[26] = {0};     
        int tempoTotal[26] = {0};    
        int erros[26] = {0};         
        for (int i = 0; i < N; i++) {
            char letra;
            int tempo;
            char resultado[10];
            scanf(" %c %d %s", &letra, &tempo, resultado);
            int indice = letra - 'A';  
            if (resolvido[indice]) {
                continue; 
            }
            if (strcmp(resultado, "correct") == 0) {
                resolvido[indice] = 1;
                tempoTotal[indice] = tempo + erros[indice] * 20;
            } else {
                erros[indice]++;
            }
        }
        int totalResolvidos = 0;
        int tempoFinal = 0;
        for (int i = 0; i < 26; i++) {
            if (resolvido[i]) {
                totalResolvidos++;
                tempoFinal += tempoTotal[i];
            }
        }
        printf("%d %d\n", totalResolvidos, tempoFinal);
    }
    return 0;
}