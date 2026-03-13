
#define _USE_MATH_DEFINES

#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

double s_x(int n, double x) {
    double result = 1;
    int fact = 1;

    for (int k = 1; k <= n; k++) {
        fact *= k;
        result += ((cos(k * x)) / fact);
    }
    return result;
}

double y_x(double x) {
    double result;
    
    result = exp(cos(x));
    result *= cos(sin(x));
    return result;
}

int main() {
    double a, h, b, x, e;
    int n = 0;

    printf("Please, input variables\na =  ");
    scanf_s("%lf", &a);
    printf("b =  ");
    scanf_s("%lf", &b);
    printf("h =  ");
    scanf_s("%lf", &h);
    printf("e =  ");
    scanf_s("%lf", &e);

    puts("x\t\tn\tS(x)\t\tY(x)\t\t|Y(x) - S(x)|");
    puts("--------------------------------------------------------------------------------------------------------------");

    for (x = a; x <= b; x += h) {
        printf("%lf\n", x);
        while (abs(y_x(x) - s_x(n, x)) >= e) {
            double s = s_x(n, x), y = y_x(x);
            printf("%lf\t%i\t%lf\t%lf\t%lf\n", x, n, s, y, abs(y-s));
            n++;
        }
        n = 0;
        puts("--------------------------------------------------------------------------------------------------------------");
    }

    return 0;
}
