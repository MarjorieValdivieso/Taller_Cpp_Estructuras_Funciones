#include <iostream>
using namespace std;

int main() {
    float notas[10];
    float suma = 0;
    int aprobados = 0;
    int reprobados = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese la calificacion del estudiante " << i + 1 << " (0 a 10): ";
        cin >> notas[i];

        if (notas[i] < 0 || notas[i] > 10) {
            cout << "Nota invalida. Intente nuevamente.\n";
            i--;
        } else {
            suma += notas[i];

            if (notas[i] >= 7) {
                aprobados++;
            } else {
                reprobados++;
            }
        }
    }

    float promedio = suma / 10;

    cout << "\nPromedio general: " << promedio << endl;
    cout << "Estudiantes aprobados: " << aprobados << endl;
    cout << "Estudiantes reprobados: " << reprobados << endl;

    return 0;
}
