// laba6 dop1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int main() {

	int raws = 0, col = 0;
	srand(time(0));

	do {
		puts("Select number of rows and colums:");
		printf("raws: "); scanf_s("%i", &raws);
		printf("colums: "); scanf_s("%i", &col);
		if (raws < 1 || col < 1) puts("ERROR! number of colums or number of raws < 1!");
	} while (raws < 1 || col < 1);

	int** arr = new int* [raws];
	for (int i = 0; i < raws; i++) {
		arr[i] = new int[col];
	}

	int sw = 0;

	puts("0 - random variables (default), 1 - from keyboard");
	scanf_s("%i", &sw);
	for (int i = 0; i < raws; i++) {
		for (int j = 0; j < col; j++) {
			switch (sw) {
			case 1: {
				scanf_s("%i", &arr[i][j]);
				break;
			}
			default: {
				arr[i][j] = rand() % 100 + 10;
				break;
			}
			}

		}
	}
	puts("");

	for (int i = 0; i < raws; i++) {
		for (int j = 0; j < col; j++) {
			printf("%i ", arr[i][j]);
		}
		printf("\n");
	}

	int* sum_col = new int[col];
	for (int j = 0; j < col; j++) {
		sum_col[j] = 0;
		for (int i = 0; i < raws; i++) {
			sum_col[j] += arr[i][j];
		}
		
	}

	for (int i = 0; i < col - 1; i++) {
		for (int j = 0; j < col - i - 1; j++) {
			if (sum_col[j] < sum_col[j + 1]) {
				int temp_sum = sum_col[j];
				sum_col[j] = sum_col[j + 1];
				sum_col[j + 1] = temp_sum;

				for (int k = 0; k < raws; k++) {
					int temp = arr[k][j];
					arr[k][j] = arr[k][j + 1];
					arr[k][j + 1] = temp;
				}
			}
		}
	}
	puts("");
	for (int i = 0; i < raws; i++) {
		for (int j = 0; j < col; j++) {
			printf("%i ", arr[i][j]);
		}
		printf("\n");
	}


	for (int i = 0; i < raws; i++) {
		delete[] arr[i];
	}
	delete[] arr;
	delete[] sum_col;

	return 0;
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
