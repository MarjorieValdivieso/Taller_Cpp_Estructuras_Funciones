#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<float> notas;
    float nota;
    float suma = 0;
    float promedio;
    float mayor, menor;
    int aprobados = 0;
    int reprobados = 0;

    cout << "Ingrese 10 notas finales:\n";
    for(int i = 0; i < 10; i++) {
        cout << "Nota " << i + 1 << ": ";
        cin >> nota;
        notas.push_back(nota);
        suma += nota;
        if(i == 0) {
            mayor = nota;
            menor = nota;
        } else {
            if(nota > mayor) mayor = nota;
            if(nota < menor) menor = nota;
        }

        if(nota >= 7) {
            aprobados++;
        } else {
            reprobados++;
        }
    }

    promedio = suma / 10;

    float porcentajeAprobados = (aprobados / 10.0) * 100;
    float porcentajeReprobados = (reprobados / 10.0) * 100;

    cout << "Promedio general: " << promedio << endl;
    cout << "Nota mas alta: " << mayor << endl;
    cout << "Nota mas baja: " << menor << endl;
    cout << "Aprobados: " << aprobados << " (" << porcentajeAprobados << "%)" << endl;
    cout << "Reprobados: " << reprobados << " (" << porcentajeReprobados << "%)" << endl;

    return 0;
}
