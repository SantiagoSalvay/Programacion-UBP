#include <iostream>
#include <fstream>
#include "caso2.h"

using namespace std;

void registrarAtencion() {
    int idBuscado;
    cout << "Ingrese el ID del turno a marcar como atendido: ";
    cin >> idBuscado;

    fstream archivo(ARCHIVO_TURNOS, ios::in | ios::out | ios::binary);
    if (!archivo) {
        cout << "No se pudo abrir el archivo de turnos.\n\n";
        return;
    }

    Turno t;
    streampos posicionRegistro;
    bool encontrado = false;

    while (archivo.read(reinterpret_cast<char*>(&t), sizeof(Turno))) {
        if (t.idTurno == idBuscado && t.activo) {
            posicionRegistro = archivo.tellg() - static_cast<streamoff>(sizeof(Turno));
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "No se encontro un turno activo con ese ID.\n\n";
        return;
    }

    if (t.atendido) {
        cout << "Ese turno ya estaba registrado como atendido.\n\n";
        return;
    }

    t.atendido = true;

    archivo.clear();
    archivo.seekp(posicionRegistro);
    archivo.write(reinterpret_cast<char*>(&t), sizeof(Turno));
    archivo.close();

    cout << "Turno " << t.idTurno << " marcado como atendido.\n\n";
}
