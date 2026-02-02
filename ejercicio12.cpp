#include<iostream>
using namespace std;

int main(){
    int arr[8];
    int mayor, menor;

    for(int i = 0; i < 8; i++){
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> arr[i];

        if(i == 0){
            mayor = arr[i];
            menor = arr[i];
        } else {
            if(arr[i] > mayor){
                mayor = arr[i];
            }
            if(arr[i] < menor){
                menor = arr[i];
            }
        }
    }

    int diferencia = mayor - menor;

    cout << "\nEl numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;
    cout << "La diferencia entre mayor y menor es: " << diferencia << endl;

    return 0;
}
