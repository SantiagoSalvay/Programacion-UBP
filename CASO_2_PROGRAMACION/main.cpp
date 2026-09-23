#include <iostream>
#include "caso2.h"

using namespace std;

int main() {
    int opcion;

    do {
        cout << "Gestion de turnos medicos\n";
        cout << "1. Alta de turno\n";
        cout << "2. Consulta general\n";
        cout << "3. Buscar por ID\n";
        cout << "4. Modificar\n";
        cout << "5. Registrar atencion\n";
        cout << "6. Baja logica\n";
        cout << "0. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            altaTurno();
            break;
        case 3:
            buscarPorId();
            break;
        case 2:
            consultaGeneral();
            break;
        case 5:
            registrarAtencion();
            break;
        case 4:
            modificarTurno();
            break;
        case 6:
            bajaTurno();
            break;
        case 0:
            cout << "Saliendo...\n";
            break;
        default:
            cout << "Opcion invalida. Intente de nuevo.\n\n";
            cin.clear();
            cin.ignore(10000, '\n');
            break;
        }
    } while (opcion != 0);

    return 0;
}