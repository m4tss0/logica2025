#include <stdio.h>
#include <string.h>
int main() {
    int N;
    scanf("%d", &N);
    while (N--) {
        char A[25], B[25];  
        scanf("%s %s", A, B);
        int lenA = strlen(A);
        int lenB = strlen(B);
        if (lenB > lenA) {
            printf("nao encaixa\n");
        } else {
            if (strcmp(A + lenA - lenB, B) == 0) {
                printf("encaixa\n");
            } else {
                printf("nao encaixa\n");
            }
        }
    }
    return 0;
}