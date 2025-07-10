#include <stdio.h>
int main() {
    int N;
    int X[1000]; 
    int mV, p;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }
    mV = X[0];
    p = 0;
    for (int i = 1; i < N; i++) {
        if (X[i] < mV) {
            mV = X[i];
            p = i;
        }
    }
    printf("Menor valor: %d\n", mV);
    printf("Posicao: %d\n", p);
    return 0;
}