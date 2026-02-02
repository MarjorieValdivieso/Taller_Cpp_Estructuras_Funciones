#include <iostream>
#include <vector>
#include <cmath> 
using namespace std;

int main() {
    vector<int> numeros;        
    vector<int> cuadrados;      
    int num;
    int sumaCuadrados = 0;

    cout << "Ingrese 10 numeros:\n";
    for(int i = 0; i < 10; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> num;
        numeros.push_back(num);

        int cuadrado = pow(num, 2); 
        cuadrados.push_back(cuadrado);
        sumaCuadrados += cuadrado;
    }

    float promedioCuadrados = sumaCuadrados / 10.0; 
    cout << "\nCuadrados de los numeros:\n";
    for(int i = 0; i < 10; i++) {
        cout << "Numero: " << numeros[i] << " Cuadrado: " << cuadrados[i] << endl;
    }

    cout << "\nSuma de los cuadrados: " << sumaCuadrados << endl;
    cout << "Promedio de los cuadrados: " << promedioCuadrados << endl;

    return 0;
}
