#include <iostream>
#include <vector>
using namespace std;

void llenar(vector<int> &v, int n) {
    int x;
    for (int i = 0; i < n; i++) {
    	cout<<"valor"<<i+1<<endl;
    	
        cin >> x;
        v.push_back(x);
    }
}

void calcular(vector<int> &v) {
    int suma = 0, mayor = v[0], menor = v[0];
    for (int i = 0; i < v.size(); i++) {
        suma += v[i];
        if (v[i] > mayor) mayor = v[i];
        if (v[i] < menor) menor = v[i];
    }
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << (float)suma / v.size() << endl;
    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;
}

int main() {
    vector<int> v;
    int n;
    cout << "Cantidad: ";
    cin >> n;
    llenar(v, n);
    calcular(v);
    return 0;
}
