#include<iostream>
using namespace std;
int Ejercicio_2() {
	int i = 0, j = 0, k = 0, l = 0;
	cin >> i >> j >> k >> l;
	if (j != 0 and l != 0) {
		if ((i / j) == (k / l)) {
			cout << "Los coeficientes son iguales";
		}
	}
	else {
		cout << "No se puede dividir por 0.";
	}
	return 0;
}