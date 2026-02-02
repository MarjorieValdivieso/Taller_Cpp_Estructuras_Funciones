#include <iostream>
using namespace std;

int main() {
    int numeros[10]; 
    int dentroRango = 0;
    int fueraRango = 0;


    cout << "Ingrese 10 numeros:\n";
    for(int i = 0; i < 10; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];

        if(numeros[i] >= 20 && numeros[i] <= 80) {
            dentroRango++;
        } else {
            fueraRango++;
        }
    }


    float porcentajeDentro = (dentroRango / 10.0) * 100;
    float porcentajeFuera = (fueraRango / 10.0) * 100;
    cout << "\nCantidad de numeros dentro del rango 20-80: " << dentroRango << endl;
    cout << "Cantidad de numeros fuera del rango: " << fueraRango << endl;
    cout << "Porcentaje dentro del rango: " << porcentajeDentro << "%" << endl;
    cout << "Porcentaje fuera del rango: " << porcentajeFuera << "%" << endl;

    return 0;
}
