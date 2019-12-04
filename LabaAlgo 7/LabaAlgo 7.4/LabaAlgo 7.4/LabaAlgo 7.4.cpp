#include <iostream>
#include <locale>
#include "cmath"
using namespace std;

int lenstr(const char* s) {
	int i = 0;
	while (*s++)
		++i;
	return i;
}
char* Nizreg(char* str1) {
	char low[28] = { 'a','b','c','d','e','f','g','h','i','g','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',' ' };
	char hig[28] = { 'A','B','C','D','E','F','G','H','I','G','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',' ' };
	for (int i = 0; i < lenstr(str1); i++) {
		for (int j = 0; j < lenstr(low); j++) {
			if (str1[i] == hig[j]) {
				str1[i] = low[j];
			}
		}
	}
	return str1;
}
int main() {
	setlocale(LC_ALL, "Russian");
	/*На вход программе подается строка, длинной не более 100 символов.
Определить, является ли она перевертышем. Например, как слово "шалаш" или "топот".
Учтите что строка может содержать пробелы, их учитывать не нужно. Например, строка "А
роза упала на лапу Азора" будет являться перевертышем.*/
	/*char str[100];
	char str1[100];
	int s = 0;
	cout << "Введите слово или строку ";
	cin.getline(str, 100);
	cout << endl;

	int dl = lenstr(str)/2;
	Nizreg(str); Nizreg(str1);
	
	for (int i = dl, j = 0; i >= 0; i--, j++) {
		str1[i] = str[j];
	}
	for (int i = 0; i < dl-1; i++) {
		if (str1[i] == str[i]) {
			s += 1;
		}
		if (s == lenstr(str)-1) cout << "Похожи";
	else cout << "Не похожи";
	}*/
	char s[100], st;
	int i;
	cout << "Введите слово или строку ";
	cin.getline(s, 100);
    st = ' ';
	for (i = 0; i < lenstr(s); i++) {
	st = s[i] + st;
	}
	if (s == &st) printf("Палиндром");
	else printf("Не палиндром");
	
	

	return 0;
}