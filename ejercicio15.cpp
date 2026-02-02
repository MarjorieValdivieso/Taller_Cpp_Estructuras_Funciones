#include<iostream>
using namespace std;

int main(){
    int arr[15];
    float sumaposi = 0;
    float sumanega = 0;
    int contador1 = 0;
    int contador2 = 0;

    for(int i = 0; i < 15; i++){
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> arr[i];

        if(arr[i] > 0){
            sumaposi += arr[i];
            contador1++;
        } else if(arr[i] < 0){
            sumanega += arr[i];
            contador2++;
        }
    }

    if(contador1 > 0){
        float promedioposi = sumaposi / contador1;
        cout << "Promedio de numeros positivos: " << promedioposi << endl;
    } else {
        cout << "No se ingresaron numeros positivos." << endl;
    }

    if(contador2 > 0){
        float promedionega = sumanega / contador2;
        cout << "Promedio de numeros negativos: " << promedionega << endl;
    } else {
        cout << "No se ingresaron numeros negativos." << endl;
    }

    return 0;
}
