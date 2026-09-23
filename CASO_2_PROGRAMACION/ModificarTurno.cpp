#include <iostream>
#include <fstream>
#include <cstring>
#include "caso2.h"

using namespace std;

void modificarTurno() {
    int idBuscado;
    cout << "Ingrese el ID del turno a modificar: ";
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

    cin.ignore();

    char buffer[50];

    cout << "Paciente actual: " << t.paciente << "\n";
    cout << "Nuevo paciente (Enter para dejar igual): ";
    cin.getline(buffer, 50);
    if (buffer[0] != '\0') {
        strcpy_s(t.paciente, buffer);
    }

    cout << "Especialidad actual: " << t.especialidad << "\n";
    cout << "Nueva especialidad (Enter para dejar igual): ";
    cin.getline(buffer, 40);
    if (buffer[0] != '\0') {
        strcpy_s(t.especialidad, buffer);
    }

    cout << "Hora actual: " << t.hora << "\n";
    cout << "Nueva hora HH:MM (Enter para dejar igual): ";
    cin.getline(buffer, 6);
    if (buffer[0] != '\0') {
        strcpy_s(t.hora, buffer);
    }

    archivo.clear();
    archivo.seekp(posicionRegistro);
    archivo.write(reinterpret_cast<char*>(&t), sizeof(Turno));
    archivo.close();

    cout << "Turno modificado correctamente.\n\n";
}
