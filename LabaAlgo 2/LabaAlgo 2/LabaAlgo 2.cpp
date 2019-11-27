#include <iostream>

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
			return 0;
		}
	
	}break;
	case 3: {}break;
	case 4: {}break;
	}
	return 0;
}