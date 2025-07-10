#include <stdio.h>
int main() {
    int N;
    while (1) {
        scanf("%d", &N);
        if (N == 0)
            break;
        int total = 0;
        for (int i = 1; i <= N; i++) {
            total += i * i; 
        }
        printf("%d\n", total);
    }
    return 0;
}