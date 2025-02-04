// Proyecto: EstructurasDeControl
// Archivo: verificaCandidato.cpp
// Este programa solicita la edad y la calificación de un candidato
// y determina si ha aprobado o reprobado el examen según su edad.
// Autor: Profesorcito
// Fecha: 28/ene/2025

#include <iostream>

using namespace std;

int main() {
    int edad, calificacion;

    cout << "Ingrese la edad del candidato: ";
    cin >> edad;
    cout << "Ingrese la calificación del candidato: ";
    cin >> calificacion;

    if (edad <= 14 && calificacion >= 50)
        cout << "El candidato ha aprobado el examen." << endl;
    else if (edad <= 16 && calificacion >= 55)
        cout << "El candidato ha aprobado el examen." << endl;
    else if (calificacion >= 60)
        cout << "El candidato ha aprobado el examen." << endl;
    else
        cout << "El candidato ha reprobado el examen." << endl;

    return 0;
}