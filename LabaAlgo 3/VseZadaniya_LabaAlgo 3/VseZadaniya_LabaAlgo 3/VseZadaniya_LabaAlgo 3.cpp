#include <iostream>
#include <cmath>
using namespace std;


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
	*/

	//zadanie 1.2
	/*int N = 1, i, n = 1;
	cout << "Введите число " << endl;
	cin >> N;
	for (i = 1; i <= N; i++) {
		n *= i;
	}
	cout << "Факториал числа N = " << n << endl;

	//zadanie 1.3
	/*int N, i; double a = 1;
	cout << "Write N " << endl;
	cin >> N;
	for (i = 1; i <= N; i++) {
		a = a * (1 + 1 / pow(i, 2));
	}
	cout << a;
	*/

	//zadanie 1.4
	/*int N, i; double a = 0;
	cout << "Введите количество повторений корней" << endl;
	cin >> N;
	for (i = 1; i <= N; i++) {
		a = sqrt(2 + a);
	}
	cout << "Результат вычисления равен " << a << endl;
	*/
	return 0;
}