#include <iostream>
using namespace std;

void analizar(int v[], int n) {
    int mayor = v[0], menor = v[0];
    int positivos = 0, negativos = 0, ceros = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] > mayor) mayor = v[i];
        if (v[i] < menor) menor = v[i];

        if (v[i] > 0)
            positivos++;
        else if (v[i] < 0)
            negativos++;
        else
            ceros++;
    }

    cout << "\nMayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;
    cout << "Positivos: " << positivos << endl;
    cout << "Negativos: " << negativos << endl;
    cout << "Ceros: " << ceros << endl;
}

int main() {
    int n;
    int numeros[50];

    cout << "Cantidad de numeros: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    analizar(numeros, n);

    return 0;
}
