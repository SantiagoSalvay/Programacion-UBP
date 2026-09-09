//Marcos Amador Oliver | Legajo: 191991
//Juan Pablo Brunetti | Legajo: 189310
//Ignacio José González Alvarez | Legajo : 190399
//David Santiago Oviedo Peralta | Legajo : 190545
//Juan Santiago Salvay Mendez | Legajo : 189546

//18/8/2026



#include <iostream>
using namespace std;
//G=(991 + 399 + 546 + 545 + 310) MOD 1000 =791

const int N = 288;
const int G = 791;
// CAL-1: se reemplazan los valores mágicos 2 y 8 por constantes descriptivas.
const int LIMITE_INFERIOR = 2;
const int LIMITE_SUPERIOR = 8;
// CAL-3: se reemplazan los valores mágicos 12 y 5.0 por constantes descriptivas.
const int LIMITE_CRITICO = 12;
const double PORCENTAJE_MAXIMO = 5.0;
// CAL-2: se reemplaza el valor mágico 96 por una constante descriptiva.
const int MEDICIONES_POR_DIA = 96;
const int R = 3 + (G % 4);

// PRE: n >= 1 y G contiene la semilla grupal válida.
// POST: carga en el arreglo t las n mediciones generadas según la fórmula.
void generarMediciones(double t[], int n, int G)
{
    for (int i = 0; i < n; i++)
    {
        t[i] = 2 + ((i * G + 31) % 9)
            + 6 * ((i % MEDICIONES_POR_DIA) >= 40 && (i % MEDICIONES_POR_DIA) <= 44);
    }
}

// PRE : n >= 1 y el arreglo contiene n mediciones válidas
// POST: calcula el promedio, la temperatura máxima y mínima y deja sus posiciones correspondientes
void calcularIndicadoresBasicos(double t[], int n, double& promedio, double& maxTemp, int& posMax, double& minTemp, int& posMin) {
    double suma = 0.0;

    maxTemp = t[0];
    posMax = 0;

    minTemp = t[0];
    posMin = 0;

    for (int i = 0; i < n; i++)
    {
        suma += t[i];

        if (t[i] > maxTemp)
        {
            maxTemp = t[i];
            posMax = i;
        }

        if (t[i] < minTemp)
        {
            minTemp = t[i];
            posMin = i;
        }

        }
    promedio = suma / n;
}

// PRE : n >= 1 y el arreglo contiene n mediciones válidas
// POST: deja en cantFuera la cantidad de mediciones fuera del rango [2, 8] y en porcFuera el porcentaje correspondiente.
void calcularMedicionesFueraRango(double t[], int n, int& cantFuera, double& porcFuera)
{
    cantFuera = 0;

    for (int i = 0; i < n; i++)
    {
        
        if (t[i] < LIMITE_INFERIOR || t[i] > LIMITE_SUPERIOR)
        {
            cantFuera++;
        }
    }
    porcFuera = cantFuera * 100.0 / n;
}
// PRE: n >= 1 y el arreglo tiene n mediciones válidas.
// POST: deja en rachaMax la longitud de la excursión más larga y en inicioMax la posición donde comienza.
void calcularExcursionMasLarga(double t[], int n, int& rachaMax, int& inicioMax)
{
    int rachaActual = 0;
    int inicioActual = -1;
    int rachaMaxLocal = 0;
    int inicioMaxLocal = -1;

    for (int i = 0; i < n; i++)
    {
        if (t[i] < LIMITE_INFERIOR || t[i] > LIMITE_SUPERIOR)
        {
            

            if (rachaActual == 0)
            {
                inicioActual = i;
            }
            rachaActual += 1;

            if (rachaActual > rachaMaxLocal)
            {
                rachaMaxLocal = rachaActual;
                inicioMaxLocal = inicioActual;
            }
        }
        else
        {
            rachaActual = 0;
        }
    }

    rachaMax = rachaMaxLocal;
    inicioMax = inicioMaxLocal;
}

// PRE: maxTemp, rachaMax y porcFuera contienen los resultados de R1, R2 y R3 y R contiene el limite maximo permitido para la excursion.
// POST: devuelve 'R' si el lote es RECHAZADO, 'O' si es OBSERVADO y 'A' si es APTO.
char determinarDictamen(double maxTemp, int rachaMax, double porcFuera, int R)
{
    if (maxTemp > LIMITE_CRITICO)
    {
        return 'R';
    }
    else if (rachaMax > R)
    {
        return 'R';
    }
    else if (porcFuera > PORCENTAJE_MAXIMO)
    {
        return 'O';
    }
    else
    {
        return 'A';
    }
}

// PRE: dictamen contiene 'A', 'O' o 'R'.
// POST: muestra en pantalla el dictamen correspondiente.
void presentarDictamen(char dictamen)
{
    cout << "DICTAMEN DEL LOTE" << endl;

    if (dictamen == 'R')
    {
        cout << "Resultado: RECHAZADO" << endl;
    }
    else if (dictamen == 'O')
    {
        cout << "Resultado: OBSERVADO" << endl;
    }
    else
    {
        cout << "Resultado: APTO" << endl;
    }
}



int main()
{
    double temperaturas[N];

    generarMediciones(temperaturas, N, G);

    double promedio;
    double maxTemp;
    double minTemp;
    int posMax;
    int posMin;

    int cantFuera;
    double porcFuera;

    int rachaMax;
    int inicioMax;

    char dictamen;

    calcularIndicadoresBasicos(temperaturas, N, promedio, maxTemp, posMax, minTemp, posMin);
    calcularMedicionesFueraRango(temperaturas, N, cantFuera, porcFuera);
    calcularExcursionMasLarga(temperaturas, N, rachaMax, inicioMax);

    dictamen = determinarDictamen(maxTemp, rachaMax, porcFuera, R);

    int opcion;

    do
    {
        cout << "\n===== MENU =====" << endl;
        cout << "1.Indicadores Basicos" << endl;
        cout << "2.Temperaturas fuera de rango" << endl;
        cout << "3.Excursion mas larga" << endl;
        cout << "4.Dictamen" << endl;
        cout << "5.Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');

            cout << "Entrada invalida. Debe ingresar un numero" << endl;
            continue;
        }

    

        switch (opcion)
        {
        case 1:
        {
            cout << "R1: INDICADORES BASICOS" << endl;
            cout << "Temperatura promedio: " << promedio << " C" << endl;
            cout << "Temperatura maxima: " << maxTemp
                << " C (Medicion Numero: " << posMax + 1 << ")" << endl;
            cout << "Temperatura minima: " << minTemp
                << " C (Medicion Numero: " << posMin + 1 << ")" << endl;
            break;
        }

        case 2:
        {
            cout << "R2: MEDICIONES FUERA DE RANGO" << endl;
            cout << "Cantidad: " << cantFuera << endl;
            cout << "Porcentaje: " << porcFuera << "%" << endl;
            break;
        }

        case 3:
        {
            cout << "R3: EXCURSION MAS LARGA" << endl;
            cout << "Racha mas larga de mediciones fuera de rango: "
                << rachaMax << endl;
            cout << "Inicio de la racha: "
                << inicioMax + 1 << endl;
            break;
        }

        case 4:
        {
            presentarDictamen(dictamen);
            break;
        }

        case 5:
            cout << "Saliendo" << endl;
            break;

        default:
            cout << "Opcion invalida." << endl;
        }

    } while (opcion != 5);

    return 0;
}