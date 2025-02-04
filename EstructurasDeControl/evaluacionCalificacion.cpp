// Proyecto: EstructurasDeControl
// Archivo: evaluacionCalificacion.cpp
// Este programa evalúa la calificación de un candidato y muestra un mensaje correspondiente.
// Autor: Profesorcito
// Fecha: 28/ene/2025

#include <iostream>

using namespace std;

int main() {
    int calificacion;

    cout << "Ingrese la calificación: ";
    cin >> calificacion;

    switch (calificacion) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            cout << "Has reprobado." << endl;
        break;
        case 5:
            cout << "Puedes mejorar." << endl;
        break;
        case 6:
        case 7:
            cout << "Has hecho un buen trabajo." << endl;
        break;
        case 8:
        case 9:
        case 10:
            cout << "¡Muy bien!" << endl;
        break;
        default:
            cout << "Calificación incorrecta." << endl;
    }

    return 0;
}
