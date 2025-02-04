// Proyecto: EstructurasDeControl
// Archivo: verificaPositivo.cpp
// Este programa evalúa si un número ingresado por el usuario es positivo, negativo o cero,
// utilizando una estructura de control condicional (if-else).
// Autor: Profesorcito
// Fecha: 28/ene/2025#include <iostream>

#include <iostream>
#include <ostream>
#include <process.h>
using namespace std;

int main() {
    system("chcp 65001");
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero > 0) {
        cout << "El número es positivo." << endl;
    } else {
        cout << "El número es negativo o cero." << endl;
    }

    return 0;
}
