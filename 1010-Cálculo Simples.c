#include <stdio.h>
 
int main() {
    int cod1;
    int n1;
    double v1;
    int cod2;
    int n2;
    double v2;
    scanf("%d %d %lf",&cod1, &n1, &v1);
    scanf("%d %d %lf",&cod2, &n2, &v2);
    double t;
    t = n1*v1 + n2*v2;
    printf("VALOR A PAGAR: R$ %.2lf\n",t);
    return 0;
}