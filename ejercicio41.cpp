#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void ingresarCalificaciones(vector<float> &notas, int n) {
    float x;
    for (int i = 0; i < n; i++) {
        cout << "Calificacion " << i + 1 << ": ";
        cin >> x;
        notas.push_back(x);
    }
}
float calcularTotal(vector<float> notas) {
    float suma = 0;
    for (int i = 0; i < notas.size(); i++) {
        suma += notas[i];
    }
    return suma;
}

int main() {
    vector<float> calificaciones;
    int n;

    cout << "Cantidad de calificaciones: ";
    cin >> n;

    ingresarCalificaciones(calificaciones, n);

    ofstream archivo("calificaciones.txt");
    for (int i = 0; i < calificaciones.size(); i++) {
        archivo << calificaciones[i] << endl;
    }
    archivo.close();

    calificaciones.clear();
    ifstream leer("calificaciones.txt");

    for (int i = 0; i < n; i++) {
        float nota;
        leer >> nota;
        calificaciones.push_back(nota);
    }
    leer.close();

    float total = calcularTotal(calificaciones);
    float promedio = total / calificaciones.size();

    int arriba = 0, abajo = 0;
    for (int i = 0; i < calificaciones.size(); i++) {
        if (calificaciones[i] > promedio)
            arriba++;
        else
            abajo++;
    }

    cout << "Total de calificaciones: " << total << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Calificaciones arriba del promedio: " << arriba << endl;
    cout << "Calificaciones debajo del promedio: " << abajo << endl;

    return 0;
}
