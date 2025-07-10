#include <stdio.h>
int fib(int n, int *calls) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    (*calls)++;  
    int a = fib(n - 1, calls);
    (*calls)++;  
    int b = fib(n - 2, calls);
    return a + b;
}

int main() {
    int N;
    scanf("%d", &N);
    while (N--) {
        int x;
        scanf("%d", &x);
        int calls = 0;
        int resultado = fib(x, &calls);
        printf("fib(%d) = %d calls = %d\n", x, resultado, calls);
    }
    return 0;
}