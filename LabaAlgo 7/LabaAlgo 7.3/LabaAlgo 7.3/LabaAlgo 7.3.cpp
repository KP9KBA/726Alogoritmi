#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
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
	/*Пользователь вводит две строки. Необходимо сравнить их между собой, и
вывести yes если строки полностью совпадают, или no в противном случае. Регистр
учитывать не нужно. Т.е строки "Hello WorlD" и "hello world" считаются двумя одинаковыми
строками.*/
	int i;
	bool odin = false;
	char str1[100], str2[100];
	cout << "Введите 1" << endl;
	cin.getline(Nizreg(str1), lenstr(str1));

	cout << "Введите 2" << endl;
	cin.getline(Nizreg(str2), lenstr(str2));

	for (i = 0; i < lenstr(str1); i++) {
		if (str1[i] == str2[i]) odin = true;
		else odin = false;
	}
	if (odin == true) cout << "Похожи";
	else cout << "Не похожи";
	return 0;
}