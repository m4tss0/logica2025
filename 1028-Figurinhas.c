#include <stdio.h>

int mdc(int R, int V) {
    if (V == 0)
        return R;
    return mdc(V, R % V);
}

int main() {
    int N;
    int i;
    int F1; 
    int F2;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d %d", &F1, &F2);
        printf("%d\n", mdc(F1, F2));
    }
    return 0;
}
