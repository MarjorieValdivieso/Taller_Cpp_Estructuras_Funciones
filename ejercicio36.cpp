#include <iostream>
#include <fstream>
using namespace std;

struct Estudiante {
    string nombre;
    float nota1, nota2, nota3;
};

int main() {
    Estudiante e;
    int n;
    string buscar;

    cout << "Cantidad de estudiantes: ";
    cin >> n;

    ofstream archivo("estudiantes.txt");
    for (int i = 0; i < n; i++) {
        cout << "\nNombre: ";
        cin >> e.nombre;
        cout << "Nota 1: ";
        cin >> e.nota1;
        cout << "Nota 2: ";
        cin >> e.nota2;
        cout << "Nota 3: ";
        cin >> e.nota3;

        archivo << e.nombre << " " << e.nota1 << " "
                << e.nota2 << " " << e.nota3 << endl;
    }
    archivo.close();

    cout << "\nBuscar estudiante: ";
    cin >> buscar;

    ifstream leer("estudiantes.txt");
    for (int i = 0; i < n; i++) {
        leer >> e.nombre >> e.nota1 >> e.nota2 >> e.nota3;
        if (e.nombre == buscar) {
            float promedio = (e.nota1 + e.nota2 + e.nota3) / 3;
            cout << "Promedio: " << promedio << endl;
            if (promedio >= 7)
                cout << "Aprueba\n";
            else
                cout << "Reprueba\n";
        }
    }
    leer.close();
    return 0;
}
