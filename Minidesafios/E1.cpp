#include <iostream>
#include <iomanip>

int Ejercicio1() {
	struct diaClima {
		int dia;
		float tempMax;
		float tempMin;
	};
	diaClima semana[7] = {
		{1, 30.5, 20.0},
		{2, 28.0, 18.5},
		{3, 32.0, 22.0},
		{4, 29.5, 19.0},
		{5, 31.0, 21.5},
		{6, 27.5, 17.0},
		{7, 33.0, 23.0}
	};
	float sumaTempMax = 0.0;
	for (const auto& dia : semana) {
		sumaTempMax += dia.tempMax;
	}
	float promedioTempMax = sumaTempMax / 7;
	std::cout << std::fixed << std::setprecision(1) << "El promedio de temperaturas maximas es: " << promedioTempMax << "C" << std::endl;
	return 0;
}