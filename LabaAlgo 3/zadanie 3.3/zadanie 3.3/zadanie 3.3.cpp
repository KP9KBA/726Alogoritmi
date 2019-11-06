#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	setlocale(LC_ALL, "ru");

	int N, i, j;
	//cout << "Введите число N" << endl;
	//cin >> N;
	/*for (int i = 1; i <= N; ++i)// способ вывода столбцами 
	{
		for (int j = 1; j <= N; ++j)
		{
			cout << /*size_t() <<*/// i * j << ' '; //sizeof() - возвращает размер указателя
	//	}
		//cout << '\n';
	//}
	
	//cout << endl << setw(20) << left << dannoe1 << setw(20) << left << dannoe2 << setw(20) << left << dannoe3*/
	int N;
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
	
	



	return 0;
}