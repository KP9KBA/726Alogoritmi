#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	setlocale(LC_ALL, "ru");
	int N, i, j;
	cout << "" << endl;
	cin >> N;
	for (int i = 1; i <= 9; ++i)// способ вывода столбцами 
		//setw не читаются. Почему?
	{
		for (int j = 1; j <= 9; ++j)
		{
			cout << setw(2) << i * j << ' ';
		}
		cout << '\n';
	}

	/*cout << endl << setw(20) << left << dannoe1 << setw(20) << left << dannoe2 << setw(20) << left << dannoe3*/






	return 0;
}