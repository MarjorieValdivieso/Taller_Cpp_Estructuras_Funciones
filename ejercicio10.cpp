#include <iostream>
using namespace std;

int main() {
    int par = 0;
    int impar = 0;

    for (int i = 1; i <= 100; i++) {
        cout << i << endl;

        if (i % 2 == 0) {
            par += i;      
        } else {
            impar += i;    
        }
    }

    cout << "La suma de numeros pares es: " << par << endl;
    cout << "La suma de numeros impares es: " << impar << endl;

    if (par > impar) {
        cout << "La suma mayor es la de los pares." << endl;
    } else {
        cout << "La suma mayor es la de los impares." << endl;
    }

    return 0;
}
