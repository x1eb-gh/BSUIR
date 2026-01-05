
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
				case 1:
					scanf_s("%i", &arr[i][j]);
					break;
				default:
					arr[i][j] = rand() % 100 + 10;
					break;
			}
		}
	}

	int res = 0;

	for (int i = 0; i < raws; i++) {
		for (int j = 0; j < col; j++) {
			if (arr[i][j - 1] > arr[i][j] && arr[i][j] > arr[i][j + 1]) res += 1;
		}
	}

	printf("result = %i", res);

	for (int i = 0; i < raws; i++) {
		delete[] arr[i];
	}
	delete[] arr;

	return 0;
}