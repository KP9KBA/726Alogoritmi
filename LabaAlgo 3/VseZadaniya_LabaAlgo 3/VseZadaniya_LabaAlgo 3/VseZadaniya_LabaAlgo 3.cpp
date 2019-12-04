#include <iostream>
#include <cmath>
using namespace std;


int main() {
	setlocale(LC_ALL, "ru");
	int a;
	//int* p;
	//p = &a;
	printf("Введите номер задания: \n");
	scanf_s("%d", &a);
	switch (a) {

	case 1: {
		double N, n, y = 1;
		cout << "Введите степень 2 " << endl;
		cin >> N;
		for (n = 1; n <= N; n++) {
			y *= 2;
		}
		cout << "Результат возведения в степень равен " << y << endl;
	}break;

	case 2: {
		int N = 1, i, n = 1;
		cout << "Введите число " << endl;
		cin >> N;
		for (i = 1; i <= N; i++) {
			n *= i;
		}
		cout << "Факториал числа N = " << n << endl;
	}break;
	case 3: {
		int N, i; double a = 1;
		cout << "Write N " << endl;
		cin >> N;
		for (i = 1; i <= N; i++) {
			a = a * (1 + 1 / pow(i, 2));
		}
		cout << a;
	}break;

	case 4: {
		int N, i; double a = 0;
		cout << "Введите количество повторений корней" << endl;
		cin >> N;
		for (i = 1; i <= N; i++) {
			a = sqrt(2 + a);
		}
		cout << "Результат вычисления равен " << a << endl;
	}break;
	case 6: {
		int N, i, j;
		cout << "Введите число N" << endl;
		cin >> N;
		for (int i = 1; i <= N; ++i)// способ вывода столбцами 
		{
			for (int j = 1; j <= N; j++)
			{
				cout << i * j << ' ';
				cout << '\n';
			}

			/*cout << endl << setw(20) << left << dannoe1 << setw(20) << left << dannoe2 << setw(20) << left << dannoe3*/
			/*int N;
			cout << "Введите число N" << endl;
			cin >> N;
			int m_x[N];
			int m_y[N];
			int i, j, Z[m_x][m_y];
			for (j = 0; j < N; j++) {
				for (i = 0; i < (N - 1); i++) {
					Z[N][N] = m_x[j] * m_y[i];
					cout << Z[j][i];
				}
			}
			*/
		}
	}break;
	case 5: {
		int b, a;
		double c, d, e, f; //b - вводимое нами знаение больше 100, а - переменная, помогающая сделать цикл фор, с - складывает все возведения в квадрат,
		// Д - количество цифр всего, е - переменная для суммы квадратов(все вместе), ф -результат выражения
		cout << "Введите переменную b" << endl;
		cin >> b;
		e = 0;
		if (b >= 100) {
			for (a = 100; a <= b; a++) {
				c = a * a;
				e += c;
			}
			d = b - 99;
			f = e / d;
			cout << "Среднее арфимитическое всех квадратов целых чисел равно " << f << endl;
		}
		else {
			cout << "Введите значение переменной b больше 100" << endl;
		}
	   }
	}

	
	return 0;
}