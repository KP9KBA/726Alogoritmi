﻿#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	int a;

	printf("Введите номер задания\n");
	scanf_s("%i", &a);
	switch (a) {
	case 1: {
		/*Ввести с клавиатуры число N – количество элементов одномерного массива.
Последовательно ввести с клавиатуры все элементы массива. Отсортировать его по
возрастанию модифицированным МЕТОДОМ ПРОСТОГО ВЫБОРА. Вывести получивший массив
на экран.*/
		/*int N; 
		int* a;
		int step ;
		double k = 1.247;
		int i, j, buf;
		printf("Введите количество элементов массива\n");
		scanf_s("%i", &N);
		a = new int[N];
		printf("Введите элементы массива\n");
		for (i = 0; i < N; i++) {
			scanf_s("%d", &a[i]);
		}
		for (step = N - i; step >= i; step /= k) {
			for (i = 0; i < N - step; i++) {
				if (a[i] > a[i + step]) {
					buf = a[i];
					a[i] = a[i + step];
					a[i + step] = buf;
				}
			}
		}
		for (int i = 0; i < N; i++) //Выводим отсортированный масив
			printf("%i ", a[i]);*/
		int i, x=0, N, j;
		int* mas;
		printf("Введите количество элементов массива ");
		scanf_s("%d", &N);
		mas = new int[N];
		printf("Введите элементы массива\n");
		for (i = 0; i < N; i++) {
			scanf_s("%d", &mas[i]);
		
		}
		for (i = 0; i < N; i++) {
			for (j = i, x = mas[j]; j > 0&&x<mas[j-1]; j--) {
				mas[j] = mas[j - 1];
				
			}
			mas[j]=x;
		}
		for (int i = 0; i < N; i++) //Выводим отсортированный масив
			printf("%i ", mas[i]);


	}break;
	case 2: {
		/*. Ввести с клавиатуры число N – количество элементов одномерного массива.
Последовательно ввести с клавиатуры все элементы массива. Отсортировать его по убыванию
методом простых обменов. Вывести получивший массив на экран.
*/
		int N;
		int* a;
		int c;
		int i=0, j=0;
		printf("Введите количество элементов одномерного массива ");
		scanf_s("%d", &N);
		a = new int [N];
		for (int i = 0; i < N; i++) /* Заполняем массив*/
		{
			printf("a[%i]: ", i);
			scanf_s("%d", &a[i]);
		}
		printf("\n");
		for (i = 0; i < N; i++) {
			for (j = 0; j < N-1; j++) {
				if (a[j] > a[j + 1]) {
					c = a[j];
					a[j] = a[j + 1];
					a[j + 1] = c;
					
				}
			}
		}
		
		for (i = 0; i < N; i++) {
			printf("%d ", a[i]);
		}

	}break;
	case 3: {
		/*Ввести с клавиатуры число N – размер квадратной матрицы. Последовательно
по строкам ввести с клавиатуры все элементы матрицы. Отсортировать элементы главной
диагонали по возрастанию. Вывести получивший двумерный массив на экран*/
		int N;
		int** a;
		int i, j, c;
		printf("Введите размер квадратной матрицы ");
		scanf_s("%d", &N);
		a = new int* [N];
		for (i = 0; i < N; i++) {//задаем значения матрицы
			a[i] = new int [N,N];
			for (j = 0; j < N; j++) {
				cout << "введите значение елемента такой позиции" << " [" << i << "][" << j << "]" << " = ";
				scanf_s("%d", &a[i][j]);
			}
		}
		for (i = 0; i < N-1; i++) {
			if (a[i][i] > a[i + 1][i + 1]) {
				c = a[i][i];
				a[i][i] = a[i + 1][i + 1];
				a[i + 1][i + 1] = c;
			}
		}
		
		for (i = 0; i < N; i++) {
			for (j = 0; j < N; j++) {
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}break;
	}

	return 0;
}