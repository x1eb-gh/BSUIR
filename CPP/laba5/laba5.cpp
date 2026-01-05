
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {

    int n = 0;
    srand(time(0));

    do {
        printf("n <= 20 = ");
        scanf_s("%i", &n);
        if (n < 1 || n > 20) {
            puts("ERROR! Wrong N!");
        }
    } while (n < 1 || n > 20);

    // 5.	Произведение элементов массива, расположенных между первым и вторым нулевыми элементами.
    int a[20] = {};
    int sw;
    int furst_null_index = -1 , second_null_index = -1;
    puts("1 - from keyboard, other - random variables");
    scanf_s("%i", &sw);

    for (int i = 0; i < n; i++) {

        switch (sw) {
            case 1:
                scanf_s("%i", &a[i]);
                break;
            default:
                a[i] = rand() % 10;
                break;
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

    if (furst_null_index == -1 || second_null_index == -1 || second_null_index - furst_null_index < 2) {
        puts("Not enough zero elements found or not enough distance between!");
        return 1;
    }
    else {
        int proizv = 1;
        for (int i = furst_null_index + 1; i < second_null_index; i++) proizv *= a[i];
        printf("%i", proizv);
    }

    return 0;
}