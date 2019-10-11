#include <iostream>
#include <cmath>
using namespace std;

//zadanie 2 function
long double fact(int N) {
	if (N < 0) {
		cout << "Результата нет " << endl;
	}
	if (N == 0) {
		return 1;
	}
	else {
		return N * fact(N - 1);

	}
}

int main() {
	setlocale(LC_ALL, "ru");

	//zadanie 1.1
	/*double N, n, y = 2;
	cout << "Введите степень 2 " << endl;
	cin >> N;
	for (n = 1; n <= N; n++) {
		y = pow(2, n);
	}
	cout << "Результат возведения в степень равен " << y << endl;

	//zadanie 1.2
	setlocale(LC_ALL, "ru");
	int N;
	cout << "Введите число " << endl;
	cin >> N;
	cout << "Факториал числа N = " << fact(N) << endl;

	//zadanie 1.3
	int N, i; double a = 1;
	cout << "Write N " << endl;
	cin >> N;
	for (i = 1; i <= N; i++) {
		a = a * (1 + 1 / pow(i, 2));
	}
	cout << a;
	

	//zadanie 1.4
	int N, i; double a = 0;
	cout << "Введите количество повторений корней" << endl;
	cin >> N;
	for (i = 1; i <= N; i++) {
		a = sqrt(2 + a);
	}
	cout << "Результат вычисления равен " << a << endl;

	return 0;
}*/