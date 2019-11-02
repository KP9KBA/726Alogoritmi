#include <stdio.h>
#include <locale.h>//задает ф-ю setlocale()
#include <cstdlib>//для включени рандомных чисел в массиве
#include <ctime>//для задания ф-и rand()
#define N 5

int main() {
	setlocale(LC_ALL, "Rus");
	int *a;
	printf("Введите номер задания: \n");
	scanf_s("%u", &a);
	switch (*a) {
	case 1: {
		/*В заданном целочисленном массиве a1, a2, … , an вычислить количество, сумму 
		и произведение нечетных чисел.Учесть возможность того, что нечетных чисел в массиве может
			не быть.*/
		int i, y = 0, c;
		int arr[5];
		srand(time(NULL));
		arr[i] = rand() % 100;
		for (i = 0; i < 5; i++) {
			printf("%d\n", arr[i]);
		}
		for (i = 0; i < 5; i++) {//алгоритм проверки 
			c = arr[i] % 2;
			if (c != 0) {//проверка нечетных чисел массива
				y += arr[i];

			}

		}
		printf("Сумма нечетных массивов ");
		printf("%d\n", y);

	}break;
	case 2: {
	int arr[N], i, min, max, b;
    srand(time(NULL));
    min = 0;
    max = 0;
	for (i=0; i<N; i++) {
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);
        if (arr[i] < arr[min]) min = i;
        if (arr[i] > arr[max]) max = i;
    }
    printf("\n");
     printf("arr[%d]=%d arr[%d]=%d\n",min+1,arr[min],max+1,arr[max]);
    b = arr[min];
    arr[min] = arr[max];
    arr[max] = b;
    for (i=0; i<N; i++) 
        printf("%d ", arr[i]);
    printf("\n");

	}
	case 3: {
		/*Дан массив a1, a2, … , an и число b. Разработать программу удаления из массива
всех элементов, меньших заданного значения b.*/
		int i, arr[N]; int* b;
		srand(time(0));
		printf("Введите b\n");
		scanf("%i", &b);
		for (i = 0; i < N; i++) {
			arr[N] = rand() % 100;
			printf("%d\n", arr[i]);
			if (arr[i] < b) {
				arr[i] = arr[i + 1];
			}

		}
		for (i = 0; i < N; i++) {
			printf("%d\n", arr[i]);
		}
	}break;
	case 4: {
		/*В заданном массиве a1, a2, … , an уменьшить положительные элементы на величину
минимального по модулю элемента этого массива*/
	}break;
	}
	return 0;
}
