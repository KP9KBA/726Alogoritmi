#include <iostream>
#include <cstdlib>//для включени рандомных чисел в массиве
#include <ctime>//для задания ф-и rand()
//#define N 5

int main() {
	setlocale(LC_ALL, "Rus");
	int a;

	printf("Введите номер задания: \n");
	scanf_s("%d", &a);
	printf("\n");
	switch (a) {
	case 1: {
		/*В заданном целочисленном массиве a1, a2, … , an вычислить количество, сумму 
		и произведение нечетных чисел.Учесть возможность того, что нечетных чисел в массиве может
			не быть.*/
		int i, y = 0, c;
		int arr[5];
		srand(time(NULL));
		
		for (i = 0; i < 5; i++) {
			arr[i] = rand() % 100;
			printf("%d\n", arr[i]);
		}
		for (i = 0; i < 5; i++) {//алгоритм проверки 
			if (arr[i] % 2 != 0) {//проверка нечетных чисел массива
				y += arr[i];

			}

		}
		printf("Сумма нечетных массивов %d\n",y);

	}break;
	case 2: {
		/*В заданном массиве a1, a2, … , an поменять местами максимальный и 
минимальный элементы*/
	int arr[5], i, min, max, b;
    srand(time(NULL));
    min = 0;
    max = 0;
	for (i=0; i<5; i++) {
        arr[i] = rand ()%50-25;
        printf("%d ", arr[i]);
        if (arr[i] < arr[min]) min = i;
        if (arr[i] > arr[max]) max = i;
    }
    printf("\n");
     printf("arr[%d]=%d arr[%d]=%d\n",min+1,arr[min],max+1,arr[max]);
    b = arr[min];
    arr[min] = arr[max];
    arr[max] = b;
    for (i=0; i<5; i++) 
        printf("%d ", arr[i]);
    printf("\n");

	}
		  break;
	case 3: {
		/*Дан массив a1, a2, … , an и число b. Разработать программу удаления из массива
всех элементов, меньших заданного значения b.*/
		int i, arr[5], b, y, j;

		printf("Введите b\n");
		scanf_s("%d", &b);
		printf("значения массива \n");
		for (i = 0; i < 5; i++) {
			arr[i] = rand() % 100;
			printf("%d ", arr[i]);			
		}
		printf("\n");
		for (j = 0; j < 5; j++) {
			if (arr[j] < b) {
				arr[j] = 0;
			}

		}
		printf("новый массив \n");
		for (i = 0; i <= 4; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
		}break;
	case 4: {
		/*В заданном массиве a1, a2, … , an уменьшить положительные элементы на величину
минимального по модулю элемента этого массива*/
		int arr[5], i, y=0, b;

		printf("значения массива \n");
		for (i = 0; i <= 4; i++) {//выводит массив
			arr[i] = rand() % 50 - 25;
			printf("%d ", arr[i]);
		}
		printf("\n");
		for (i = 0; i <= 4; i++) {
			if (abs(arr[i]) > abs(arr[i+1])) {//сравнивает числа массива
				y = abs(arr[i+1]);//минимальное по модулю число
				
			}
		}
		printf("\n");
		printf("новые значения массива \n");
		for (i = 0; i <= 4; i++) {
			if (arr[i] > 0) {//находит положительные числа и записывает их в массив
				arr[i] -= y;
			}
			printf("%d ", arr[i]);
		}


	}break;
	}
	return 0;
}
