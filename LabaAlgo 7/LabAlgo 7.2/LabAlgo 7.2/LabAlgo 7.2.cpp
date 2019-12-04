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

int main() {//расписывать каждую функцию и готовые не использовать
	setlocale(LC_ALL, "Russian");

	/*Напишите программу, которая переводит данную строку в нижний
регистр. Т.е. из строки "Hello WorlD" должна получиться строка "hello world".
*/
	char str1[100];
	char low[28] = { 'a','b','c','d','e','f','g','h','i','g','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',' ' };
	char hig[28] = { 'A','B','C','D','E','F','G','H','I','G','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',' ' };

	cout << "Введите " << '\n';
	cin.getline(str1, lenstr(str1));


	for (int i = 0; i < lenstr(str1); i++) {
		for (int j = 0; j < lenstr(low); j++) {
			if (str1[i] == hig[j]) {
				str1[i] = low[j];
			}
		}
	}
	cout << str1;


	/*На вход программе подается строка, длинной не более 100 символов.
Определить, является ли она перевертышем. Например, как слово "шалаш" или "топот".
Учтите что строка может содержать пробелы, их учитывать не нужно. Например, строка "А
роза упала на лапу Азора" будет являться перевертышем.*/

	return 0;
}