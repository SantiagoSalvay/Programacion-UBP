#include <iostream>
#include <fstream>
#include "caso2.h"

using namespace std;

void buscarPorId() {
    int idBuscado;
    cout << "Ingrese el ID del turno a buscar: ";
    cin >> idBuscado;

    ifstream archivo(ARCHIVO_TURNOS, ios::in | ios::binary);
    if (!archivo) {
        cout << "No se pudo abrir el archivo de turnos.\n\n";
        return;
    }

    Turno t;
    bool encontrado = false;

    while (archivo.read(reinterpret_cast<char*>(&t), sizeof(Turno))) {
        if (t.idTurno == idBuscado && t.activo) {
            encontrado = true;
            break;
        }
    }

    archivo.close();

    if (encontrado) {
        cout << "ID: " << t.idTurno << "\n";
        cout << "Paciente: " << t.paciente << "\n";
        cout << "Especialidad: " << t.especialidad << "\n";
        cout << "Hora: " << t.hora << "\n";
        cout << "Atendido: " << (t.atendido ? "Si" : "No") << "\n";
        cout << "\n";
    }
    else {
        cout << "No se encontro un turno activo con ese ID.\n\n";
    }
}