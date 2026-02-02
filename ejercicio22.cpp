#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros; 
    int num;
    int multiplos3 = 0;
    int multiplos5 = 0;
    int multiplosAmbos = 0;

    cout << "Ingrese 15 numeros:\n";
    for(int i = 0; i < 15; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> num;
        numeros.push_back(num);
        
        if(num % 3 == 0) multiplos3++;
        if(num % 5 == 0) multiplos5++;
        if(num % 3 == 0 && num % 5 == 0) multiplosAmbos++;
    }

    cout << "\nCantidad de numeros multiplos de 3: " << multiplos3 << endl;
    cout << "Cantidad de numeros multiplos de 5: " << multiplos5 << endl;
    cout << "Cantidad de numeros multiplos de ambos (3 y 5): " << multiplosAmbos << endl;

    return 0;
}
