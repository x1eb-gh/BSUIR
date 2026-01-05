
#define _USE_MATH_DEFINES

#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

typedef double (*MathF)(double x, int n);

double s_x(double x, int n) {
    double result = 1;
    int fact = 1;

    for (int k = 1; k <= n; k++) {
        fact *= k;
        result += ((cos(k * x)) / fact);
    }
    return result;
}

double y_x(double x, int n) {
    double result;

    result = exp(cos(x));
    result *= cos(sin(x));
    return result;
}

void Out_Rez(MathF fun1, MathF fun2, double a, double b, double h, double e) {

    puts("x\tn\tS(x)\t\tY(x)\t\t|Y(x) - S(x)|");
    puts("--------------------------------------------------------------------------------------------------------------");

    for (double x = a; x < b; x += h) {
        printf("%3.2lf\n", x);
        int n = 0;
        while (fabs(fun2(x, n) - fun1(x, n)) >= e) {
            printf("%3.2lf\t%i\t%lf\t%lf\t%14.12lf\n", x, n, fun1(x, n), fun2(x, n), fabs(fun2(x, n) - fun1(x, n)));
            n++;
        }
        n = 0;
        puts("--------------------------------------------------------------------------------------------------------------");
    }
}

void inp(double &var, const char* name) {
    printf_s("%s = ", name);
    scanf_s("%lf", &var);
}

int main() {
    double a, b, h, e;
    a = b = h = e = 0;
    printf("Please, input variables\n");
    inp(a, "a");
    inp(b, "b");
    inp(h, "h");
    inp(e, "e");

    Out_Rez(s_x, y_x, a, b, h, e);

    return 0;
}
