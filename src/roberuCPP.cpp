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
void sec10();
void sec12();
void sec14();

/**
 * main
 */
int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	cout << "Super!!!!" << endl;
	cout << "aaaaa" << endl;
	sec6();
	cout << sec7f(10, 11) << endl;
	//sec10();
	sec12();
	sec14();
	cout << "End of Program" << endl;
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

/**
 * 入力を受け取る
 */
void sec10() {
	int a;
	cout << "何か数値を入れてね:";
	cin >> a;
	cout << a << endl;
}

void sec12() {
	int a = 10;
	if (a > 3) {
		cout << "aは3より大きい" << endl;
	} else if (a > 2) {
		cout << "aは2より大きい" << endl;
	} else {
		cout << "aは2以下" << endl;
	}
}
void sec14() {
	for (int i = 0, l = 10; i < l; i++) {
		cout << "######" << endl;
	}
}
