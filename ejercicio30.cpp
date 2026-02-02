#include <iostream>
using namespace std;

int main() {
    int matriz[2][4];
    int mayor;
    int fila, columna;

    cout << "Ingrese los valores de la matriz 2x4:" << endl;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
            if(i == 0 && j == 0) {
                mayor = matriz[i][j];
                fila = i;
                columna = j;
            }

            if(matriz[i][j] > mayor) {
                mayor = matriz[i][j];
                fila = i;
                columna = j;
            }
        }
    }

    cout << "\nNumero mayor: " << mayor << endl;
    cout << "Posicion: Fila " << fila + 1 << ", Columna " << columna + 1 << endl;

    return 0;
}
