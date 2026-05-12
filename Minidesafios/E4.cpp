#include <iostream>

int Ejercicio4() {
	struct Alumno {
		std::string nombre = "";
		float nota1 = 0.0;
		float nota2 = 0.0;
		float nota3 = 0.0;
	};
	Alumno alumno;
	std::cout << "Ingrese el nombre del alumno: ";
	std::cin >> alumno.nombre;
	std::cin.ignore();
	std::cout << "Ingrese la nota 1: ";
	std::cin >> alumno.nota1;
	std::cin.ignore();
	std::cout << "Ingrese la nota 2: ";
	std::cin >> alumno.nota2;
	std::cin.ignore();
	std::cout << "Ingrese la nota 3: ";
	std::cin >> alumno.nota3;
	std::cin.ignore();
	float promedio = (alumno.nota1 + alumno.nota2 + alumno.nota3) / 3.0;
	std::cout << "El promedio de " << alumno.nombre << " es: " << promedio << std::endl;
	if (promedio >= 6.0) {
		std::cout << "El alumno esta aprobado." << std::endl;
	} else {
		std::cout << "El alumno no esta aprobado." << std::endl;
	}
	return 0;
}