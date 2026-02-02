#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    int opcion;
    int suma = 0;
    float promedio;
    int mayor, menor;
    int positivos, negativos;

    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Ingresar 10 numeros en un arreglo" << endl;
        cout << "2. Mostrar el promedio" << endl;
        cout << "3. Mostrar el mayor y el menor" << endl;
        cout << "4. Contar numeros positivos y negativos" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                suma = 0;
                for(int i = 0; i < 10; i++) {
                    cout << "Numero " << i + 1 << ": ";
                    cin >> numeros[i];
                    suma += numeros[i];
                }
                cout << "Numeros ingresados correctamente." << endl;
                break;

            case 2:
                promedio = suma / 10.0;
                cout << "El promedio es: " << promedio << endl;
                break;

            case 3:
                mayor = numeros[0];
                menor = numeros[0];
                for(int i = 1; i < 10; i++) {
                    if(numeros[i] > mayor)
                        mayor = numeros[i];
                    if(numeros[i] < menor)
                        menor = numeros[i];
                }
                cout << "Mayor: " << mayor << endl;
                cout << "Menor: " << menor << endl;
                break;

            case 4:
                positivos = 0;
                negativos = 0;
                for(int i = 0; i < 10; i++) {
                    if(numeros[i] > 0)
                        positivos++;
                    else if(numeros[i] < 0)
                        negativos++;
                }
                cout << "Positivos: " << positivos << endl;
                cout << "Negativos: " << negativos << endl;
                break;

            case 5:
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                cout << "Opcion invalida." << endl;
        }

    } while(opcion != 5);

    return 0;
}
