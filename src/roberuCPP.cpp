//============================================================================
// Name        : roberuCPP.cpp
// Author      : norainu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void sec6();
int sec7f(int, int);

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	cout << "Super!!!!" << endl;
	cout << "aaaaa" << endl;
	sec6();
	cout << sec7f(10, 11) << endl;
	return 0;
}

void sec6() {
	int a = 0;
	a += 2;
	a++;
	cout << a << endl;
	return;
}
int sec7f(int x, int y) {
	return 2 * x + y;
}
