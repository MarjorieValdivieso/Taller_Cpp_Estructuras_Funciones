#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<float> precios; 
    float precio;
    float subtotal = 0;
    cout << "Ingrese 10 precios:\n";
    for(int i = 0; i < 10; i++) {
        cout << "Precio " << i + 1 << ": ";
        cin >> precio;
        precios.push_back(precio);
        subtotal += precio; 
    }

    float iva = subtotal * 0.12;      
    float total = subtotal + iva;    

    cout << "\nSubtotal: $" << subtotal << endl;
    cout << "IVA (12%): $" << iva << endl;
    cout << "Total a pagar: $" << total << endl;

    return 0;
}
