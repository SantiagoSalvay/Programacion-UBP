#include <iostream>
#include <string>

using namespace std;

int Ejercicio_9() {
    string nombre;
    int totalPreguntas, correctas;
    float porcentaje;

    cout << "Ingrese el nombre del postulante: ";
	cin >> nombre;
    cout << "Cantidad total de preguntas realizadas: ";
    cin >> totalPreguntas;
    cout << "Cantidad de preguntas contestadas correctamente: ";
    cin >> correctas;


    porcentaje = (correctas * 100.0) / totalPreguntas;

    cout << "\n--- Informe de Resultados ---" << endl;
    cout << "Postulante: " << nombre << endl;
    cout << "Porcentaje obtenido: " << porcentaje << "%" << endl;
    cout << "Estado: ";

    if (porcentaje >= 90) {
        cout << "Nivel Superior";
    }
    else if (porcentaje >= 75) {
        cout << "Nivel Medio";
    }
    else if (porcentaje >= 50) {
        cout << "Nivel Regular";
    }
    else {
        cout << "Fuera de Nivel";
    }

    cout << endl;

    return 0;
}