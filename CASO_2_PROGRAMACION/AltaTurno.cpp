#include <iostream>
#include <fstream>
#include "caso2.h"

using namespace std;

void altaTurno() {
    Turno t;
    t.idTurno = generarNuevoId();

    cin.ignore();

    cout << "Paciente: ";
    cin.getline(t.paciente, 50);

    cout << "Especialidad: ";
    cin.getline(t.especialidad, 40);

    cout << "Hora (HH:MM): ";
    cin.getline(t.hora, 6);

    t.atendido = false;
    t.activo = true;

    ofstream archivo(ARCHIVO_TURNOS, ios::app | ios::binary);
    if (!archivo) {
        cout << "No se pudo abrir el archivo de turnos.\n\n";
        return;
    }

    archivo.write(reinterpret_cast<char*>(&t), sizeof(Turno));
    archivo.close();

    cout << "Turno cargado con ID " << t.idTurno << ".\n\n";
}
