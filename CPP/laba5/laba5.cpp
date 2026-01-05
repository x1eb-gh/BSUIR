// laba5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void main() {
    int n = 0;
    srand(time(0));
    do {
        printf("n <= 20 = "); scanf_s("%i", &n);
        if (n < 1 || n > 20)
            puts("ERROR! Wrong N!");
    } while (n < 1 || n > 20);
    // 5.	Произведение элементов массива, расположенных между первым и вторым нулевыми элементами.
    int a[20] = {};
    int sw = 0;
    int furst_null_index = -1 , second_null_index = -1;
    puts("0 - random variables (default), 1 - from keyboard");
    scanf_s("%i", &sw);
    for (int i = 0; i < n; i++) {
        switch (sw) {
            case 1: {
                scanf_s("%i", &a[i]);
                break;
            }
            default: {
                a[i] = rand() % 100 + 10;
                break;
            }
        }
        if (a[i] == 0) {
            if (furst_null_index == -1) {
                furst_null_index = i;
            }
            else if (second_null_index == -1) {
                second_null_index = i;
            }
        }
    }
    if (furst_null_index == -1 || second_null_index == -1) {
        puts("Not enough zero elements found!");
    }
    else {
        int proizv = 1;
        for (int i = furst_null_index + 1; i < second_null_index; i++) proizv *= a[i];
        printf("%i", proizv);
    }
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
