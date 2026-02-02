#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> edades; 
    int edad;
    float suma = 0;
    int mayores = 0;
    int menoresIguales = 0;

    cout << "Ingrese 10 edades:\n";
    for(int i = 0; i < 10; i++) {
        cout << "Edad " << i + 1 << ": ";
        cin >> edad;
        edades.push_back(edad);
        suma += edad; 
    }

    float promedio = suma / 10; 

    for(int i = 0; i < 10; i++) {
        if(edades[i] > promedio) {
            mayores++;
        } else {
            menoresIguales++;
        }
    }

    cout << "\nPromedio de edades: " << promedio << endl;
    cout << "Cantidad de edades mayores al promedio: " << mayores << endl;
    cout << "Cantidad de edades menores o iguales al promedio: " << menoresIguales << endl;

    return 0;
}
