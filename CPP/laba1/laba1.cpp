
#include <cmath>
#include <stdio.h>

using namespace std;

int main() {
    double x, y, z;
    
    puts("Hi! Please, print values of variables!");
    printf("x =  ");
    scanf_s("%lf", &x);
    printf("y =  ");
    scanf_s("%lf", &y);
    printf("z =  ");
    scanf_s("%lf", &z);

    double res_1 = pow(y, -(sqrt(fabs(x))));
    double res_2 = (log(res_1)) * (x - y / 2);
    double res_3 = pow(sin(atan(z)), 2);

    double result = res_2 + res_3;

    printf("Result = %lf", result);

    return 0;
}
