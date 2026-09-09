// Santiago Salvay - Legajo: 189546 - S: 546 - Ejercicio 3 - 09/08/2026
#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

long long opsA = 0;
long long opsB = 0;

const int S = 546;

vector<int> generarVector(int n) {
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        v[i] = (46 * i + 17) % 100;
    }

    return v;
}

int solucionA(vector<int>& v, int m) {

    int n = v.size();
    int contador = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            opsA++;

            if ((v[i] + v[j]) % m == 0) {
                contador++;
            }
        }
    }

    return contador;
}

int solucionB(vector<int>& v, int m) {

    vector<int> freq(m, 0);
    int contador = 0;

    for (int x : v) {

        int r = x % m;
        int complemento = (m - r) % m; // resto que falta para que la suma sea multiplo de m

        opsB++;

        contador += freq[complemento];
        freq[r]++;
    }

    return contador;
}

int Ejercicio3() {

    int valoresN[5] = { 500, 1000, 2000, 4000, 8000 };

    int m = (S % 4) + 3;

    cout << "m = " << m << endl;

    for (int i = 0; i < 5; i++) {

        int n = valoresN[i];

        vector<int> v = generarVector(n);

        opsA = 0;

        auto start = chrono::high_resolution_clock::now();
        int resA = solucionA(v, m);
        auto end = chrono::high_resolution_clock::now();

        double tiempoA = chrono::duration<double, milli>(end - start).count();

        opsB = 0;
        int resB = solucionB(v, m);

        cout << "\nN = " << n << endl;

        cout << "Resultado A: " << resA << endl;
        cout << "Resultado B: " << resB << endl;

        cout << "Ops A: " << opsA << endl;
        cout << "Ops B: " << opsB << endl;

        cout << "Tiempo A : " << tiempoA << endl;

        if (resA != resB) {
            cout << "resultados distintos" << endl;
        }
    }

    return 0;
}
