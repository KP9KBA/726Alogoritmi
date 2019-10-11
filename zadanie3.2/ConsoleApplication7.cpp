// ConsoleApplication7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;


int main() {
	/*int b, a, c, d;
	double f;
	cout << "Write b " << endl;
	cin >> b;
	
	if (b < 100){
		cout << "false" << endl;
	}
	else{
		for (a=100; a <= b; a++){
			c = a*a;
			d += c;
		}
	}
	f = (d / (b - 99));
	cout << f << endl;*/

	/*double a, b, c, d=0, e, f;
	cin >> b;
	e = b - 100;
	if (b < 100){
		cout << "false" << endl;
	}
	else{
		for (a = 100; a <= b; a++){
			c = a*a;
			d += c;
		}
	}
	f = d / e;
	cout << f << endl;*/
	double a = 100, b = 0, c = 0, d = 0, f;
	cin >> b;
	for (a; a <= b; a++){
		c = a*a+c;

	}
	f = c / (b - 99);
	cout << f << endl;

	return 0;

}
