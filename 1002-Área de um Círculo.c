#include <stdio.h>
 
int main() {
    double r;
    double area;
    double n;
    n = 3.14159;
    scanf("%lf",&r);
    area = n*r*r;
    printf("A=%.4lf\n",area);
    return 0;
}