#include <iostream>
using namespace std;

int main() {
    int opcion;
    int numero = 0;

    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Ingresar un numero" << endl;
        cout << "2. Verificar si esta en el rango de 1 a 100" << endl;
        cout << "3. Verificar si es par o impar" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Ingrese un numero: ";
                cin >> numero;
                break;

            case 2:
                if(numero >= 1 && numero <= 100) {
                    cout << "El numero esta dentro del rango de 1 a 100." << endl;
                } else {
                    cout << "El numero esta fuera del rango de 1 a 100." << endl;
                }
                break;

            case 3:
                if(numero % 2 == 0) {
                    cout << "El numero es PAR." << endl;
                } else {
                    cout << "El numero es IMPAR." << endl;
                }
                break;

            case 4:
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                cout << "Opcion invalida." << endl;
        }

    } while(opcion != 4);

    return 0;
}

