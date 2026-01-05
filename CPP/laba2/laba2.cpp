
#include <iostream>
#include <cmath>

using namespace std;

double main() {
    double x, z, f, a, b;
    int select;

    f = 0.;

    printf("\nHi! Print values of variables : \na =  ");
    scanf_s("%lf", &a);
    printf("b =  ");
    scanf_s("%lf", &b);
    printf("z =  ");
    scanf_s("%lf", &z);
   
    if (z < -1) {
        printf("\nYou choose z = %lf , your x = -z / 3\n", z);
        x = -((z * 1.) / 3.);
    }
    else {
        printf("\nYou choose z = %lf , your x = |z|\n", z);
        x = fabs(z);
    };
    // Ограничения на логарифм по z не нужны, т.к. lh(x + 2,5) с учетом системы задания x принадлежит D(z) 

    do {
        printf("Please, select function:\n1:\t2x\n2:\tx^2\n3:\tx/3\n\n");
        scanf_s("%i", &select);
        switch (select) {
            case 1: 
                f = 2 * x; 
                printf("\nYou select: f = 2x"); 
                break;
            case 2: 
                f = pow(x, 2);
                printf("\nYou select f = x^2"); 
                break;
            case 3: 
                f = (x * 1.) / 3.; 
                printf("\nYou select f = x / 3"); 
                break;
            default: 
                printf("\nERROR!!! Uncnown number!!!\n"); 
                break;
        }
    } while ((select > 3) || (select < 1));

    double res_1, res_2, res_3;
    res_1 = a * f;
    res_2 = log(x + 2.5);
    res_3 = 2 * b * sinh(x);
    printf("\ny = %lf", (res_1 - res_2 + res_3));
    return res_1 - res_2 + res_3;
}