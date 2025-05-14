#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793

int main() {
    double a, b, c;
    while (scanf("%lf %lf %lf", &a, &b, &c) == 3) {

        double sp = (a + b + c) / 2;

        double Atriang = sqrt(sp * (sp - a) * (sp - b) * (sp - c));

        double r = Atriang / sp;
        
        double Arosas = PI * r * r;

        double R = (a * b * c) / (4 * Atriang);

        double Acircmaior = PI * R * R;

        double Avioletas = Atriang - Arosas;
        
        double Agirassois = Acircmaior - Atriang;

        printf("%.4lf %.4lf %.4lf\n", Agirassois, Avioletas, Arosas);
    }

    return 0;
}