#include "calc.h"

void result(double a, double b) {
	double n, m;
	if (a >= b) {
		n = pow(a - b, (1. / 3.));
	}
	else if (a < b) {
		if (sin(a * b) != 0)
			n = pow(a, 2) + (a - b) / sin(a * b);
		else {
			cout << "impossible" << endl;
			exit;
		}
	}
	n = round(n * 10) / 10;
	if (n < b) {
		if (b == 0) {
			cout << "impossible" << endl;
			exit;
		}
		else if (pow(sin(a), 2) - cos(n) < 0) {
			cout << "impossible" << endl;
			exit;
		}
		else
			m = (n + a) / (0 - b) + sqrt(pow(sin(a), 2) - cos(n));
	}
	else if (n == b) {
		m = pow(b, 2) + tan(n * a);
	}
	else if (n > b) {
		m = pow(b, 3) + n * pow(a, 2);
	}
	m = round(m * 10) / 10;
	cout << a << endl << b << endl << n << endl << m;
}
