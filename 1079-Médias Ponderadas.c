#include <stdio.h>
int main() {
    int N;
    float v1, v2, v3, media;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%f %f %f", &v1, &v2, &v3);
        media = (v1 * 2 + v2 * 3 + v3 * 5) / 10;
        printf("%.1f\n", media);
    }

    return 0;
}