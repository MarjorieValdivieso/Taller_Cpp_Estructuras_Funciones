
#include <iostream>
using namespace std;

void llenar(float ventas[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Venta " << i + 1 << ": ";
        cin >> ventas[i];
    }
}

void calcular(float ventas[], int n, float &total, float &promedio, int &mayores) {
    total = 0;

    for (int i = 0; i < n; i++) {
        total += ventas[i];
    }

    promedio = total / n;
    mayores = 0;

    for (int i = 0; i < n; i++) {
        if (ventas[i] > promedio) {
            mayores++;
        }
    }
}

int main() {
    int n;
    float ventas[50];
    float total, promedio;
    int mayores;

    cout << "Cantidad de ventas: ";
    cin >> n;

    llenar(ventas, n);
    calcular(ventas, n, total, promedio, mayores);

    cout << "\nTotal de ventas: " << total << endl;
    cout << "Promedio de ventas: " << promedio << endl;
    cout << "Ventas mayores al promedio: " << mayores << endl;

    return 0;
}
