#include <iostream>
#include "Complex.h"

using namespace std;

void Complex::check(Complex x, Complex y) {//проверка
	if (x.im == y.im && x.re == y.re)
		cout << "true" << endl;
	else
		cout << "false" << endl;
}

void Complex::sum(Complex x, Complex y) {
	Complex z;
	z.re = x.re + y.re;
	z.im = x.im + y.im;

	cout << "z = " << z.re << " + " << z.im << "i\n";
}

void Complex::multiplication(Complex x, Complex y) {
	Complex res;

	res.re = x.re * y.re - x.im * y.im;
	res.im = x.re * x.im - x.im * y.re;

	cout << "z = " << res.re << " + " << res.im << "i\n";
}