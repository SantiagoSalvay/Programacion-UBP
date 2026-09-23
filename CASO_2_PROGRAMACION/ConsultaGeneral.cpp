#include <iostream>
#include <fstream>
#include "caso2.h"

using namespace std;

void consultaGeneral() {
    ifstream archivo(ARCHIVO_TURNOS, ios::binary);
    if (!archivo) {
        cout << "Todavia no hay turnos cargados.\n\n";
        return;
    }

    Turno t;
    bool hayTurnosActivos = false;

    cout << "\nTurnos activos\n";

    while (archivo.read(reinterpret_cast<char*>(&t), sizeof(Turno))) {
        if (!t.activo) {
            continue;
        }
        hayTurnosActivos = true;
        cout << "ID: " << t.idTurno
             << " | Paciente: " << t.paciente
             << " | Especialidad: " << t.especialidad
             << " | Hora: " << t.hora
             << " | Atendido: " << (t.atendido ? "Si" : "No")
             << "\n";
    }

    archivo.close();

    if (!hayTurnosActivos) {
        cout << "No hay turnos activos cargados.\n";
    }
    cout << "\n";
}
