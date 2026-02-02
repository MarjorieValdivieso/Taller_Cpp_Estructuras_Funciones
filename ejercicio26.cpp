#include <iostream>
using namespace std;

int main() {
    int opcion;
    float num1 = 0, num2 = 0;
    int contador = 0; 

    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Ingresar dos numeros" << endl;
        cout << "2. Mostrar la suma y la resta" << endl;
        cout << "3. Mostrar el mayor de los dos numeros" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                contador = 1; 
                break;

            case 2:
                if(contador == 1) {
                    cout << "Suma: " << num1 + num2 << endl;
                    cout << "Resta: " << num1 - num2 << endl;
                } else {
                    cout << "Primero debe ingresar los numeros (opcion 1)." << endl;
                }
                break;

            case 3:
                if(contador == 1) {
                    if(num1 > num2) {
                        cout << "El mayor es: " << num1 << endl;
                    } else if(num2 > num1) {
                        cout << "El mayor es: " << num2 << endl;
                    } else {
                        cout << "Ambos numeros son iguales." << endl;
                    }
                } else {
                    cout << "Primero debe ingresar los numeros (opcion 1)." << endl;
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
