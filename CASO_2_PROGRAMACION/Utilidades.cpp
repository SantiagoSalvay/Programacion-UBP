#include <fstream>
#include "caso2.h"

using namespace std;

int generarNuevoId() {
    ifstream archivo(ARCHIVO_TURNOS, ios::binary);

    if (!archivo) {
        return 1;
    }

    archivo.seekg(0, ios::end);
    long tamanoBytes = static_cast<long>(archivo.tellg());
    archivo.close();

    int cantidadRegistros = static_cast<int>(tamanoBytes / sizeof(Turno));
    return cantidadRegistros + 1;
}
