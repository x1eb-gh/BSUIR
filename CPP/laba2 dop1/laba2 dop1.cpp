// laba2 dop1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
    double x, y, z, m;

    printf("Enter values of variables!\nx =  "); scanf_s("%lf", &x);
    printf("y =  "); scanf_s("%lf", &y);
    printf("z =  "); scanf_s("%lf", &z);

    if ((x + y < 0) || (x + z < 0) || (y + z < 0)) {
        printf("ERROR! Square root from negative count!"); return(000);
    }
    if ((x == 0) || (y == 0) || (z == 0)) {
        printf("ERROR!!! Division by zero!"); return(000);
    }

    // ИЩЕМ ЧИСЛИТЕЛЬ

    
    //a > b > c
    if (((sqrt(x + y) / z) >= (sqrt(x + z) / y)) && ((sqrt(x + z) / y) >= (sqrt(y + z) / x))) m = (sqrt(y + z) / x);

    //a > c > b
    if (((sqrt(x + y) / z) >= (sqrt(y + z) / x)) && ((sqrt(y + z) / x) >= (sqrt(x + z) / y))) m = (sqrt(x + z) / y);

    //b > a > c
    if (((sqrt(x + z) / y) >= (sqrt(x + y) / z)) && ((sqrt(x + y) / z) >= (sqrt(y + z) / x))) m = (sqrt(y + z) / x);

    //b > c > a
    if (((sqrt(x + z) / y) >= (sqrt(y + z) / x)) && ((sqrt(y + z) / x) >= (sqrt(x + y) / z))) m = (sqrt(x + y) / z);

    //c > a > b
    if (((sqrt(y + z) / x) >= (sqrt(x + y) / z)) && ((sqrt(x + y) / z) >= (sqrt(x + z) / y))) m = (sqrt(x + z) / y);

    //c > b > a
    if (((sqrt(y + z) / x) >= (sqrt(x + z) / y)) && ((sqrt(x + z) / y) >= (sqrt(x + y) / z))) m = (sqrt(x + y) / z);
    
    // ИЩЕМ ЗНАМЕНАТЕЛЬ


    if ((pow(x, 2) >= pow(y, 2)) && (pow(y, 2) >= pow(z, 2))) {
        if (((pow(x, 3)/y) >= (pow(y, 2)/z)) && ((pow(y, 2)/z) >= (pow(z, 2)/x))) {
            if (pow(z, 2) >= (pow(z, 2)/x)) m /= pow(pow(z, 2), 2); else m /= pow((pow(z, 2)/x), 2);
        }
        if (((pow(x, 3)/y) >= (pow(z, 2)/x)) && ((pow(z, 2)/x) >= (pow(y, 2)/z))) {
            if (pow(z, 2) >= (pow(y, 2)/z)) m /= pow(pow(z, 2), 2); else m /= pow((pow(y, 2)/z), 2);
        }
        if (((pow(y, 2)/z) >= (pow(x, 3)/y)) && ((pow(x, 3)/y) >= (pow(z, 2)/x))) {
            if (pow(z, 2) >= (pow(z, 2)/x)) m /= pow(pow(z, 2), 2); else m /= pow((pow(z, 2)/x), 2);
        }
        if (((pow(y, 2)/z) >= (pow(z, 2)/x)) && ((pow(z, 2)/x) >= (pow(x, 3)/y))) {
            if (pow(z, 2) >= (pow(x, 3)/y)) m /= pow(pow(z, 2), 2); else m /= pow((pow(x, 3)/y), 2);
        }
        if (((pow(z, 2)/x) >= (pow(x, 3)/y)) && ((pow(x, 3)/y) >= (pow(y, 2)/z))) {
            if (pow(z, 2) >= (pow(z, 2)/x)) m /= pow(pow(z, 2), 2); else m /= pow((pow(y, 2)/z), 2);
        }
        if (((pow(z, 2)/x) >= (pow(y, 2)/z)) && ((pow(y, 2)/z) >= (pow(x, 3)/y))) {
            if (pow(z, 2) >= (pow(x, 3)/y)) m /= pow(pow(z, 2), 2); else m /= pow((pow(x, 3)/y), 2);
        }
    }
    if ((pow(x, 2) >= pow(z, 2)) && (pow(z, 2) >= pow(y, 2))) {
        if (((pow(x, 3)/y) >= (pow(y, 2)/z)) && ((pow(y, 2)/z) >= (pow(z, 2)/x))) {
            if (pow(y, 2) >= (pow(z, 2)/x)) m /= pow(pow(y, 2), 2); else m /= pow((pow(z, 2)/x), 2);
        }
        if (((pow(x, 3)/y) >= (pow(z, 2)/x)) && ((pow(z, 2)/x) >= (pow(y, 2)/z))) {
            if (pow(y, 2) >= (pow(y, 2)/z)) m /= pow(pow(y, 2), 2); else m /= pow((pow(y, 2)/z), 2);
        }
        if (((pow(y, 2)/z) >= (pow(x, 3)/y)) && ((pow(x, 3)/y) >= (pow(z, 2)/x))) {
            if (pow(y, 2) >= (pow(z, 2)/x)) m /= pow(pow(y, 2), 2); else m /= pow((pow(z, 2)/x), 2);
        }
        if (((pow(y, 2)/z) >= (pow(z, 2)/x)) && ((pow(z, 2)/x) >= (pow(x, 3)/y))) {
            if (pow(y, 2) >= (pow(x, 3)/y)) m /= pow(pow(y, 2), 2); else m /= pow((pow(x, 3)/y), 2);
        }
        if (((pow(z, 2)/x) >= (pow(x, 3)/y)) && ((pow(x, 3)/y) >= (pow(y, 2)/z))) {
            if (pow(y, 2) >= (pow(z, 2)/x)) m /= pow(pow(y, 2), 2); else m /= pow((pow(y, 2)/z), 2);
        }
        if (((pow(z, 2)/x) >= (pow(y, 2)/z)) && ((pow(y, 2)/z) >= (pow(x, 3)/y))) {
            if (pow(y, 2) >= (pow(x, 3)/y)) m /= pow(pow(y, 2), 2); else m /= pow((pow(x, 3)/y), 2);
        }
    }
    if ((pow(y, 2) >= pow(x, 2)) && (pow(x, 2) >= pow(z, 2))) {
        if (((pow(x, 3)/y) >= (pow(y, 2)/z)) && ((pow(y, 2)/z) >= (pow(z, 2)/x))) {
            if (pow(z, 2) >= (pow(z, 2)/x)) m /= pow(pow(z, 2), 2); else m /= pow((pow(z, 2)/x), 2);
        }
        if (((pow(x, 3)/y) >= (pow(z, 2)/x)) && ((pow(z, 2)/x) >= (pow(y, 2)/z))) {
            if (pow(z, 2) >= (pow(y, 2)/z)) m /= pow(pow(z, 2), 2); else m /= pow((pow(y, 2)/z), 2);
        }
        if (((pow(y, 2)/z) >= (pow(x, 3)/y)) && ((pow(x, 3)/y) >= (pow(z, 2)/x))) {
            if (pow(z, 2) >= (pow(z, 2)/x)) m /= pow(pow(z, 2), 2); else m /= pow((pow(z, 2)/x), 2);
        }
        if (((pow(y, 2)/z) >= (pow(z, 2)/x)) && ((pow(z, 2)/x) >= (pow(x, 3)/y))) {
            if (pow(z, 2) >= (pow(x, 3)/y)) m /= pow(pow(z, 2), 2); else m /= pow((pow(x, 3)/y), 2);
        }
        if (((pow(z, 2)/x) >= (pow(x, 3)/y)) && ((pow(x, 3)/y) >= (pow(y, 2)/z))) {
            if (pow(z, 2) >= (pow(z, 2)/x)) m /= pow(pow(z, 2), 2); else m /= pow((pow(y, 2)/z), 2);
        }
        if (((pow(z, 2)/x) >= (pow(y, 2)/z)) && ((pow(y, 2)/z) >= (pow(x, 3)/y))) {
            if (pow(z, 2) >= (pow(x, 3)/y)) m /= pow(pow(z, 2), 2); else m /= pow((pow(x, 3)/y), 2);
        }
    }
    if ((pow(y, 2) >= pow(z, 2)) && (pow(z, 2) >= pow(x, 2))) {
        if (((pow(x, 3)/y) >= (pow(y, 2)/z)) && ((pow(y, 2)/z) >= (pow(z, 2)/x))) {
            if (pow(x, 2) >= (pow(z, 2)/x)) m /= pow(pow(x, 2), 2); else m /= pow((pow(z, 2)/x), 2);
        }
        if (((pow(x, 3)/y) >= (pow(z, 2)/x)) && ((pow(z, 2)/x) >= (pow(y, 2)/z))) {
            if (pow(x, 2) >= (pow(y, 2)/z)) m /= pow(pow(x, 2), 2); else m /= pow((pow(y, 2)/z), 2);
        }
        if (((pow(y, 2)/z) >= (pow(x, 3)/y)) && ((pow(x, 3)/y) >= (pow(z, 2)/x))) {
            if (pow(x, 2) >= (pow(z, 2)/x)) m /= pow(pow(x, 2), 2); else m /= pow((pow(z, 2)/x), 2);
        }
        if (((pow(y, 2)/z) >= (pow(z, 2)/x)) && ((pow(z, 2)/x) >= (pow(x, 3)/y))) {
            if (pow(x, 2) >= (pow(x, 3)/y)) m /= pow(pow(x, 2), 2); else m /= pow((pow(x, 3)/y), 2);
        }
        if (((pow(z, 2)/x) >= (pow(x, 3)/y)) && ((pow(x, 3)/y) >= (pow(y, 2)/z))) {
            if (pow(x, 2) >= (pow(z, 2)/x)) m /= pow(pow(x, 2), 2); else m /= pow((pow(y, 2)/z), 2);
        }
        if (((pow(z, 2)/x) >= (pow(y, 2)/z)) && ((pow(y, 2)/z) >= (pow(x, 3)/y))) {
            if (pow(x, 2) >= (pow(x, 3)/y)) m /= pow(pow(x, 2), 2); else m /= pow((pow(x, 3)/y), 2);
        }
    }
    if ((pow(z, 2) >= pow(x, 2)) && (pow(x, 2) >= pow(y, 2))) {
        if (((pow(x, 3)/y) >= (pow(y, 2)/z)) && ((pow(y, 2)/z) >= (pow(z, 2)/x))) {
            if (pow(y, 2) >= (pow(z, 2)/x)) m /= pow(pow(y, 2), 2); else m /= pow((pow(z, 2)/x), 2);
        }
        if (((pow(x, 3)/y) >= (pow(z, 2)/x)) && ((pow(z, 2)/x) >= (pow(y, 2)/z))) {
            if (pow(y, 2) >= (pow(y, 2)/z)) m /= pow(pow(y, 2), 2); else m /= pow((pow(y, 2)/z), 2);
        }
        if (((pow(y, 2)/z) >= (pow(x, 3)/y)) && ((pow(x, 3)/y) >= (pow(z, 2)/x))) {
            if (pow(y, 2) >= (pow(z, 2)/x)) m /= pow(pow(y, 2), 2); else m /= pow((pow(z, 2)/x), 2);
        }
        if (((pow(y, 2)/z) >= (pow(z, 2)/x)) && ((pow(z, 2)/x) >= (pow(x, 3)/y))) {
            if (pow(y, 2) >= (pow(x, 3)/y)) m /= pow(pow(y, 2), 2); else m /= pow((pow(x, 3)/y), 2);
        }
        if (((pow(z, 2)/x) >= (pow(x, 3)/y)) && ((pow(x, 3)/y) >= (pow(y, 2)/z))) {
            if (pow(y, 2) >= (pow(z, 2)/x)) m /= pow(pow(y, 2), 2); else m /= pow((pow(y, 2)/z), 2);
        }
        if (((pow(z, 2)/x) >= (pow(y, 2)/z)) && ((pow(y, 2)/z) >= (pow(x, 3)/y))) {
            if (pow(y, 2) >= (pow(x, 3)/y)) m /= pow(pow(y, 2), 2); else m /= pow((pow(x, 3)/y), 2);
        }
    }
    if ((pow(z, 2) >= pow(y, 2)) && (pow(y, 2) >= pow(x, 2))) {
        if (((pow(x, 3)/y) >= (pow(y, 2)/z)) && ((pow(y, 2)/z) >= (pow(z, 2)/x))) {
            if (pow(x, 2) >= (pow(z, 2)/x)) m /= pow(pow(x, 2), 2); else m /= pow((pow(z, 2)/x), 2);
        }
        if (((pow(x, 3)/y) >= (pow(z, 2)/x)) && ((pow(z, 2)/x) >= (pow(y, 2)/z))) {
            if (pow(x, 2) >= (pow(y, 2)/z)) m /= pow(pow(x, 2), 2); else m /= pow((pow(y, 2)/z), 2);
        }
        if (((pow(y, 2)/z) >= (pow(x, 3)/y)) && ((pow(x, 3)/y) >= (pow(z, 2)/x))) {
            if (pow(x, 2) >= (pow(z, 2)/x)) m /= pow(pow(x, 2), 2); else m /= pow((pow(z, 2)/x), 2);
        }
        if (((pow(y, 2)/z) >= (pow(z, 2)/x)) && ((pow(z, 2)/x) >= (pow(x, 3)/y))) {
            if (pow(x, 2) >= (pow(x, 3)/y)) m /= pow(pow(x, 2), 2); else m /= pow((pow(x, 3)/y), 2);
        }
        if (((pow(z, 2)/x) >= (pow(x, 3)/y)) && ((pow(x, 3)/y) >= (pow(y, 2)/z))) {
            if (pow(x, 2) >= (pow(z, 2)/x)) m /= pow(pow(x, 2), 2); else m /= pow((pow(y, 2)/z), 2);
        }
        if (((pow(z, 2)/x) >= (pow(y, 2)/z)) && ((pow(y, 2)/z) >= (pow(x, 3)/y))) {
            if (pow(x, 2) >= (pow(x, 3)/y)) m /= pow(pow(x, 2), 2); else m /= pow((pow(x, 3)/y), 2);
        }
    }
    printf("m = %lf", m);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
