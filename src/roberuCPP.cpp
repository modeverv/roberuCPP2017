//============================================================================
// Name        : roberuCPP.cpp
// Author      : norainu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

void sec6();
int sec7f(int, int);
void sec10();
void sec12();
void sec14();
void sec15array();
void sec17();
void sec18() {
	int i = 0;
	do {
		cout << "表示される" << endl;
	} while (i != 0); //;抜けに注意
}
void sec19();
void sec24();
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
	sec15array();
	sec17();
	sec18();
	sec19();
	sec24();
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
void sec15array() {
	int ar[] = { 1, 2, 3 };
	for (int i = 0, l = 3; i < l; i++) {
		cout << ar[i] << endl;
	}
}
void sec17() {
	int a = 1;
	for (;;) {
		cout << a << endl;
		a++;
		if (a > 10) {
			break;
		}
	}
}
void sec19() {
	int sign = 3;
	switch (sign) {
	case 1:
		cout << "a" << endl;
		break;
	case 2:
		cout << "b" << endl;
		break;
	default:
		cout << "c" << endl;
		break;
	}
}

void sec24() {
	int i;
	char szH[] = "やぁこんちは";
	for (i = 0; i < strlen(szH); i++) {
		cout << (int) (unsigned char) szH[i] << ",";
	}
	cout << (int) (unsigned char) szH[i] << endl;
}










