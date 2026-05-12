#include <iostream>

int Ejercicio5() {
	struct Contacto {
		std::string nombre = "";
		std::string telefono = "";
		std::string email = "";
	};
	Contacto contactos[5];
	for (int i = 0; i < 5; ++i) {
		std::cout << "Ingrese el nombre del contacto " << (i + 1) << ": ";
		std::cin >> contactos[i].nombre;
		std::cin.ignore(); 
		std::cout << "Ingrese el telefono del contacto " << (i + 1) << ": ";
		std::cin >> contactos[i].telefono;
		std::cin.ignore();
		std::cout << "Ingrese el email del contacto " << (i + 1) << ": ";
		std::cin >> contactos[i].email;
		std::cin.ignore();
	}
	std::cout << "Contactos con email que termina en @gmail.com:" << std::endl;
	for (int i = 0; i < 5; ++i) {
		if (contactos[i].email.size() >= 10 && 
			contactos[i].email.substr(contactos[i].email.size() - 10) == "@gmail.com") {
			std::cout << "Nombre: " << contactos[i].nombre 
					  << ", Telefono: " << contactos[i].telefono 
					  << ", Email: " << contactos[i].email << std::endl;
		}
	}
	return 0;
}