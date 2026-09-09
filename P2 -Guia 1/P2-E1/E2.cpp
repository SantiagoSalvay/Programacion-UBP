// Santiago Salvay - Legajo: 189546 - S: 546 - Ejercicio 2 - 09/08/2026
#include <iostream>
#include <vector>
using namespace std;

int contadorComparaciones = 0;
const int S = 546;

string clasificarIf(int codigo, int orden[]) {

    // el contadorComparaciones++ va antes de cada == para contar solo las comparaciones que se evaluan (cortocircuito)
    if ((contadorComparaciones++, codigo == orden[0]) ||
        (contadorComparaciones++, codigo == orden[1]) ||
        (contadorComparaciones++, codigo == orden[2])) {

        return "Alta";
    }
    else if ((contadorComparaciones++, codigo == orden[3]) ||
        (contadorComparaciones++, codigo == orden[4])) {

        return "Baja";
    }
    else if ((contadorComparaciones++, codigo == orden[5]) ||
        (contadorComparaciones++, codigo == orden[6]) ||
        (contadorComparaciones++, codigo == orden[7])) {

        return "Consulta";
    }
    else if ((contadorComparaciones++, codigo == orden[8]) ||
        (contadorComparaciones++, codigo == orden[9])) {

        return "Ajuste";
    }
    else if ((contadorComparaciones++, codigo == orden[10]) ||
        (contadorComparaciones++, codigo == orden[11])) {

        return "Invalido";
    }

    return "Invalido";
}

string clasificarSwitch(int codigo) {

    switch (codigo) {
    case 0: case 3: case 7: return "Alta";
    case 1: case 9: return "Baja";
    case 2: case 4: case 5: return "Consulta";
    case 6: case 10: return "Ajuste";
    case 8: case 11: return "Invalido";
    default: return "Invalido";
    }
}

string clasificarRango(int codigo) {

    if (codigo >= 6 && codigo <= 10) {
        return "Ajuste";
    }

    if (codigo == 0 || codigo == 3 || codigo == 7) return "Alta";
    if (codigo == 1 || codigo == 9) return "Baja";
    if (codigo == 2 || codigo == 4 || codigo == 5) return "Consulta";
    if (codigo == 8 || codigo == 11) return "Invalido";

    return "Invalido";
}


int Ejercicio2() {

    int frecuencia[12] = { 0 };
    vector<int> codigos;

    for (int k = 1; k <= 300; k++) {
        int c = (k * S + 41) % 12;
        codigos.push_back(c);
        frecuencia[c]++;
    }

    cout << "Tabla de frecuencias:\n";
    for (int i = 0; i < 12; i++) {
        cout << "Codigo " << i << ": " << frecuencia[i] << endl;
    }

    int ordenA[12] = { 0,3,7, 1,9, 2,4,5, 6,10, 8,11 };

    int ordenB[12];
    int usados[12] = { 0 };

    for (int i = 0; i < 12; i++) {
        int maxIdx = -1;
        for (int j = 0; j < 12; j++) {
            if (!usados[j] && (maxIdx == -1 || frecuencia[j] > frecuencia[maxIdx])) {
                maxIdx = j;
            }
        }
        ordenB[i] = maxIdx;
        usados[maxIdx] = 1; // marco el codigo para no repetirlo
    }

    int ordenC[12];
    for (int i = 0; i < 12; i++) usados[i] = 0;

    for (int i = 0; i < 12; i++) {
        int minIdx = -1;
        for (int j = 0; j < 12; j++) {
            if (!usados[j] && (minIdx == -1 || frecuencia[j] < frecuencia[minIdx])) {
                minIdx = j;
            }
        }
        ordenC[i] = minIdx;
        usados[minIdx] = 1;
    }

    int* ordenes[3] = { ordenA, ordenB, ordenC };
    string nombres[3] = { "A (original)", "B (decreciente)", "C (creciente)" };

    for (int i = 0; i < 3; i++) {

        contadorComparaciones = 0;

        for (int c : codigos) {
            clasificarIf(c, ordenes[i]);
        }

        cout << "\nOrden " << nombres[i] << endl;
        cout << "Total comparaciones: " << contadorComparaciones << endl;
        cout << "Promedio por codigo: "
            << (double)contadorComparaciones / 300 << endl;
    }

    int diferencias = 0;

    for (int c : codigos) {

        string a = clasificarIf(c, ordenA);
        string b = clasificarSwitch(c);

        if (a != b) {
            diferencias++;
        }
    }

    cout << "\nDiscrepancias IF vs SWITCH: " << diferencias << endl;

    return 0;
}
