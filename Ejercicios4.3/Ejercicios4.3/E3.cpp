#include<iostream>
using namespace std;
int Ejercicio_3() {
	int bancos = 0, alumnos = 0, sobrante = 0;

	cout << "Ingrese la cantidad de bancos:";
	cin >> bancos;
	cout << "Ingrese la cantidad de alumnos:";
	cin >> alumnos;
	if (alumnos <= bancos) {
		cout << "Los bancos son suficientes para los alumnos.";

	}else{
		sobrante = alumnos - bancos;
		cout << "Los bancos no son suficientes para los alumnos, hacen falta:  " << sobrante << " bancos mas.";
	}
	return 0;
}