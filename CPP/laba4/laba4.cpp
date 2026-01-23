
#define _USE_MATH_DEFINES

#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

typedef double (*MathF)(double x, int sw, int n);

double s_x(double x, int sw, int n) {
    double result = 0;
    int fact = 1;
    switch (sw) {
        case 1: 
            result = x;
            for (int k = 1; k <= n; k++) {
                fact *= (2 * k + 1);
                result += (x * pow(x * x * (-1), k)) / fact;
            }
            break;
        case 2:
            for (int k = 1; k <= n; k++) { 
                result += (-1) * pow(x * x * (-1), k) / (2 * k * (2 * k - 1));
            }
            break;
        case 3:
            result = 1;
            for (int k = 1; k <= n; k++) {
                fact *= k;
                result += (cos(k * M_PI / 4) * pow(x, k)) / fact;
            }
            break;
        case 4:
            result = 1;
            for (int k = 1; k <= n; k++) {
                fact *= 2*k;
                result += pow(x*x*(-1), k) / fact;
            }
            break;
        case 5:
            for (int k = 1; k <= n; k++) {
                fact *= k;
                result += (cos(k * x)) / fact;
            }
            break;
        case 6:
            result = 1;
            for (int k = 1; k <= n; k++) {
                fact *= k;
                result += ((2 * k + 1) * pow(x * x, k)) / fact;
            }
            break;
        case 7:
            for (int k = 1; k <= n; k++) {
                result += (cos(k * M_PI / 3) * pow(x, k)) / k;
            }
            break;
        case 8:
            result = 1;
            for (int k = 1; k <= n; k++) {
                fact *= k;
                result += pow(2 * x, k) / fact;
            }
            break;
        case 9:
            for (int k = 1; k <= n; k++) {
                result += (-1 * x) * pow(x * x * (-1), k) / (4 * k * k - 1);
            }
            break;
        case 10:
            result = 1;
            for (int k = 1; k <= n; k++) {
                fact *= 2 * k;
                result += pow(2 * x, k) / fact;
            }
            break;
        case 11:
            result = 1;
            for (int k = 1; k <= n; k++) {
                fact *= k;
                result += (k * k + 1) * pow(x / 2, k) / fact;
            }
            break;
        case 12:
            result = 1;
            for (int k = 1; k <= n; k++) {
                fact *= 2 * k;
                result += ((2 * k * k + 1) * pow((-1) * x * x, k)) / fact;
            }
            break;
        case 13:
            for (int k = 1; k <= n; k++) {
                fact *= 2 * k;
                result += pow((-4) * x * x, k) / fact;
            }
            break;
        case 14:
            result = x;
            for (int k = 1; k <= n; k++) {
                fact *= 2 * k + 1;
                result += x * pow(x * x, k) / fact;
            }
            break;
        default:
            puts("Incorrect variant value!");
            break;
            break;
    }
    return result;
}

double y_x(double x, int sw, int n) {
    double result = 0;
    switch (sw) {
        case 1:
            result = sin(x);
            break;
        case 2:
            result = x * asin(x) - log(sqrt(1 + x * x));
            break;
        case 3:
            result = exp(x * cos(M_PI / 4));
            result *= cos(x * sin(M_PI / 4));
            break;
        case 4:
            result = cos(x);
            break;
        case 5:
            result = exp(cos(x)) * cos(sin(x));
            break;
        case 6:
            result = (1 + 2 * x * x) * exp(x * x);
            break;
        case 7:
            result = (-1. / 2.) * log(1 - 2 * x * cos(M_PI / 3) + x * x);
            break;
        case 8:
            result = exp(2 * x);
            break;
        case 9:
            result = (1 + x * x) / 2 * atan(x) - x / 2;
            break;
        case 10:
            result = (exp(x) + exp(-x)) / 2;
            break;
        case 11:
            result = (x * x / 4 + x / 2 + 1) * exp(x / 2);
            break;
        case 12:
            result = (1 - x * x / 2) * cos(x) - x * sin(x) / 2;
            break;
        case 13:
            result = 2 * (cos(x) * cos(x) - 1);
            break;
        case 14:
            result = (exp(x) - exp(-x)) / 2;
            break;
    }
    return result;
}

void Out_Rez(MathF fun1, MathF fun2, int sw, double a, double b, double h, double e) {

    puts("x\tn\tS(x)\t\tY(x)\t\t|Y(x) - S(x)|");
    puts("--------------------------------------------------------------------------------------------------------------");

    for (double x = a; x < b; x += h) {
        int n = 0;
        double diff;
        do {
            double s_val = fun1(x, sw, n);
            double y_val = fun2(x, sw, n);
            diff = fabs(y_val - s_val);
            printf("%3.2lf\t%i\t%lf\t%lf\t%14.12lf\n", x, n, s_val, y_val, diff);
            n++;
        } while (diff >= e && n < 50);
        puts("--------------------------------------------------------------------------------------------------------------");
    }
}

void inp(double &var, const char* name) {
    printf_s("%s = ", name);
    scanf_s("%lf", &var);
}

int main() {
    double a, b, h, e;
    int sw = 1;
    a = b = h = e = 0;
    do {
        printf("Please, input your variant (1-14): ");
        scanf_s("%i", &sw);
        if (sw < 1 || sw > 14) {
            puts("ERROR! Incnown number of variant!");
        }
    } while (sw < 1 || sw > 14);
    do {
        printf("Please, input variables\n");
        inp(a, "a");
        inp(b, "b");
        inp(h, "h");
        inp(e, "e");
        if ((a > b && h > 0) || (a < b && h < 0)) {
            puts("ERROR! Uncnown select of barriers or step!");
        }
    } while ((a > b && h > 0) || (a < b && h < 0));
    Out_Rez(s_x, y_x, sw, a, b, h, e);

    return 0;
}
