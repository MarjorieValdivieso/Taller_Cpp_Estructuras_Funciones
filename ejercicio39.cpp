#include <iostream>
#include <vector>
using namespace std;

int suma(vector<int> v) {
    int s = 0;
    for (int i = 0; i < v.size(); i++) {
        s += v[i];
    }
    return s;
}

void paresImpares(vector<int> v) {
    int pares = 0, impares = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] % 2 == 0)
            pares++;
        else
            impares++;
    }
    cout << "Pares: " << pares << endl;
    cout << "Impares: " << impares << endl;
}

int main() {
    vector<int> numeros;
    int n, x;

    cout << "Cantidad de numeros: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> x;
        numeros.push_back(x);
    }

    int s = suma(numeros);
    float prom = (float)s / numeros.size();

    cout << "\nSuma: " << s << endl;
    cout << "Promedio: " << prom << endl;

    paresImpares(numeros);

    return 0;
}
