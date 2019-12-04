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
int main() {
	setlocale(LC_ALL, "Russian");
	/*На вход программе подается строка, длинной не более 100 символов.
Напишите программу, которая определяет длину этой строки, без учета нулевого символа.*/
/*char str[100];
printf("Введите строку ");
fgets(str,100,stdin);
printf("%s\n", str);*/
	char str[81];
	printf("\n Vvedite stroky: ");
	cin >> str;
	printf("Dlina stroky = %d\n", lenstr(str));
	return 0;
}