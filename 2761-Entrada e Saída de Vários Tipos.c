#include <stdio.h>
int main() {
    int A;                
    float B;               
    char C;                
    char D[51];           
    scanf("%d %f %c ", &A, &B, &C);
    fgets(D, 51, stdin); 
    int i = 0;
    while (D[i] != '\0') {
        if (D[i] == '\n') {
            D[i] = '\0';
            break;
        }
        i++;
    }
    printf("%d %.6f %c %s\n", A, B, C, D);
    printf("%d\t%.6f\t%c\t%s\n", A, B, C, D);
    printf("%10d %10.6f %10c %s\n", A, B, C, D);
    return 0;
}