// laba2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

void main()
{
    setlocale(LC_ALL, "rus");

    double x, z, f, a, b;
    int select;

    f = 0.;

    cout << "\n Hi! Print values of variables:\na =  "; cin >> a;
    cout << "b =  "; cin >> b;

    cout << "z =  "; cin >> z;

    if (z < -1) {
        cout << "\nYou choose z = " << z << ", your x = -z/3" << endl;
        x = -((z * 1.) / 3.);
    }
    else {
        cout << "\nYou choose z = " << z << ", your x = |z|" << endl;
        x = abs(z);
    };
    // Ограничения на логарифм по z не нужны, т.к. lh(x + 2,5) с учетом системы задания x принадлежит D(z) 

    do {
        cout << "Please, select function:\n1:\t2x\n2:\tx^2\n3:\tx/3\n" << endl;
        cin >> select;
        switch (select) {
            case 1: f = 2 * x; cout << "\nYou select: f = 2x" << endl; break;
            case 2: f = pow(x, 2); cout << "\nYou select f = x^2" << endl; break;
            case 3: f = (x * 1.) / 3.; cout << "\nYou select f = x/3" << endl; break;
            default: cout << "\nERROR!!! Uncnown number!!!\n" << endl; break;
        }
    } while ((select > 3) || (select < 1));

    double res_1, res_2, res_3;
    res_1 = a * f;
    res_2 = log(x + 2.5);
    res_3 = 2 * b * sinh(x);
    cout << "\ny =  " << (res_1 - res_2 + res_3) << endl;
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
