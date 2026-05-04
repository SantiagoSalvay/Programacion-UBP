#include <iostream>

int Ejercicio8() {
	const int N = 10;
	int horasDormidas[N];
	int totalHoras = 0;
	int personasOchoHorasOMas = 0;
	int personasMenosSeisHoras = 0;
	for (int i = 0; i < N; ++i) {
		std::cout << "Ingrese la cantidad de horas dormidas por la persona " << (i + 1) << ": ";
		std::cin >> horasDormidas[i];
		totalHoras += horasDormidas[i];
		if (horasDormidas[i] >= 8) {
			personasOchoHorasOMas++;
		}
		if (horasDormidas[i] < 6) {
			personasMenosSeisHoras++;
		}
	}
	double promedioHoras = static_cast<double>(totalHoras) / N;
	std::cout << "Promedio de horas dormidas: " << promedioHoras << std::endl;
	std::cout << "Cantidad de personas que durmieron 8 horas o mas: " << personasOchoHorasOMas << std::endl;
	std::cout << "Cantidad de personas que durmieron menos de 6 horas: " << personasMenosSeisHoras << std::endl;
	return 0;
}

