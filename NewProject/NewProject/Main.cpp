#include <iostream>
#include "Complex.h"

using namespace std;

int main() {
	system("chcp 1251");

	Complex x1, x2;
	
	cout << "Введите комплексные числа:" << endl;

	cout << "Введите первое число (re, im)" << endl;
	cin >> x1.re;
	cin >> x1.im;

	cout << "Введите второе число (re, im)" << endl;
	cin >> x2.re;
	cin >> x2.im;

	cout << " Сравнение" << endl;
	x1.check(x1, x2);

	cout << "Сложение" << endl;
	x1.sum(x1, x2);

	cout << "Умножение" << endl;
	x1.multiplication(x1, x2);
}