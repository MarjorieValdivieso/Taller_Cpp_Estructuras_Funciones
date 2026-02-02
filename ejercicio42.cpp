#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

/*
 Funcion que permite ingresar las ventas.
 El vector se pasa por referencia para poder llenarlo.
*/
void ingresarVentas(vector<double> &ventas, int n) {
    double x;
    for (int i = 0; i < n; i++) {
        cout << "Venta " << i + 1 << ": ";
        cin >> x;
        ventas.push_back(x);
    }
}

/*
 Funcion que calcula el total de ventas.
 El vector se pasa por valor porque no se modifica.
*/
double calcularTotal(vector<double> ventas) {
    double total = 0;
    for (int i = 0; i < ventas.size(); i++) {
        total += ventas[i];
    }
    return total;
}

int main() {
    vector<double> ventas;
    vector<double> ventasArchivo;
    int n;

    cout << "Cantidad de ventas: ";
    cin >> n;

    // Ingreso de ventas
    ingresarVentas(ventas, n);

    // Guardar ventas en archivo
    ofstream archivo("ventas.txt");
    for (int i = 0; i < ventas.size(); i++) {
        archivo << ventas[i] << endl;
    }
    archivo.close();

    // Leer ventas desde el archivo a un nuevo vector
    ifstream leer("ventas.txt");
    for (int i = 0; i < n; i++) {
        double valor;
        leer >> valor;
        ventasArchivo.push_back(valor);
    }
    leer.close();

    // Calculos SOLO con el vector leido del archivo
    double total = calcularTotal(ventasArchivo);
    double promedio = total / ventasArchivo.size();

    int mayores = 0, menores = 0;

    for (int i = 0; i < ventasArchivo.size(); i++) {
        if (ventasArchivo[i] > promedio)
            mayores++;
        else
            menores++;
    }


    cout << "\n--- RESULTADOS ---\n";
    cout << "Total de ventas: " << total << endl;
    cout << "Promedio de ventas: " << promedio << endl;
    cout << "Ventas mayores al promedio: " << mayores << endl;
    cout << "Ventas menores al promedio: " << menores << endl;

    return 0;
}
