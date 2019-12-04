#include <iostream>
#include <cmath>
#include <locale>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int N, i, j;
	cout << "Write N " << endl;
	cin >> N;
	for (int i = 1; i <= N; ++i) {
		for (int j = 1; j <= N; j++) {
			cout << i * j << '    ';
		}
		cout << ' \n';
	}
	return 0;
}


