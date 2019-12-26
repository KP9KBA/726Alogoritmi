#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int a;
	int* p;
	p = &a;
	printf("Введите номер задания: \n");
	scanf_s("%u", &a);
	switch (a) {
	case 1: {
		int x, y, z, max, min;
		printf( "Введите х ");
		scanf_s("%d", &x);
		printf("Введите y ");
		scanf_s("%d", &y);
		printf("Введите z ");
		scanf_s("%d", &z);
		max = x; min = x;
		if (y > max&& y > z) {
			max = y;
		}
		if (z > max&& z > y) {
			max = z;
		}
		if (y < max && y < z) {
			min = y;
		}
		if (z < min && z < y) {
			min = z;
		}
		printf("Max = %d\n", max);
		printf("Min = %d\n", min);
	}break;
	case 2: {
		
			int x, y, z;
			cout << "Write x, y, z " << endl;
			cin >> x >> y >> z;
			if (x < 5 && x>2) {
				cout << "Лежит в диапазоне " << x << endl;
			}
			else {
				if (x <= 5 && x >= 2) {
					cout << "Лежит на грани " << x << endl;
				}
				else {
					cout << "Лежит вне диапазона " << x << endl;
				}
			}
			if (y < 5 && y>2) {
				cout << "Лежит в диапазоне " << y << endl;
			}
			else {
				if (y <= 5 && y >= 2) {
					cout << "Лежит на грани " << y << endl;
				}
				else {
					cout << "Лежит вне диапазона " << y << endl;
				}
			}

			if (z < 5 && z>2) {
				cout << "Лежит в диапазоне " << z << endl;
			}
			else {
				if (z <= 5 && z >= 2) {
					cout << "Лежит на грани " << z << endl;

				}
				else {
					cout << "Лежит вне диапазона " << z << endl;

				}
			}
			
	
	}break;
	case 3: {
		int massiv[3];
		cout << "Введите три числа: ";
		for (int i = 0; i < 3; i++) {
			cin >> massiv[i];
		}
		cout << endl << "Числа в диапозоне (2;5): ";
		for (int i = 0; i < 3; i++) {
			if (massiv[i] < 5 && massiv[i] > 2) {
				cout << massiv[i] << " ";
			}
		}
		cout << endl << "Числа вне диапозона (2;5): ";
		for (int i = 0; i < 3; i++) {
			if (massiv[i] > 5 || massiv[i] < 2) {
				cout << massiv[i] << " ";
			}
		}
		cout << endl << "Числа на границе (2;5): ";
		for (int i = 0; i < 3; i++) {
			if (massiv[i] == 5 || massiv[i] == 2) {
				cout << massiv[i] << " ";
			}
		}
	}break;
	case 4: {int n;
		cout << "Введите возраст: ";
		cin >> n;
		if (n % 10 == 1 && n != 11) {
			cout << n << " год";
		}
		else {
			if ((n % 10 == 2 || n % 10 == 3 || n % 10 == 4) && n != 12 && n != 13 && n
				!= 14) {
				cout << n << " года";
			}
			else {
				cout << n << " лет";
			}
		}
	}break;
	}
	return 0;
}