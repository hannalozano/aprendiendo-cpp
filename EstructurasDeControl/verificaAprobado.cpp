// Proyecto: EstructurasDeControl
// Archivo: verificaAprobado.cpp
// Este programa determina si un estudiante ha aprobado o reprobado un curso
// en función de la calificación ingresada, utilizando una estructura de control condicional (if-else).
// Autor: Profesorcito
// Fecha: 28/ene/2025

#include <iostream>

using namespace std;

int main() {
    int grade;
    cout << "Ingrese la calificación: ";
    cin >> grade;

    if (grade >= 50) {
        cout << "Aprobado" << endl;
    } else {
        cout << "Reprobado" << endl;
        cout << "Debe repetir el curso" << endl;
    }

    return 0;
}