// Proyecto: EstructurasDeControl
// Archivo: verificaPrimeraLetra.cpp
// Este programa verifica si una palabra ingresada por el usuario
// comienza con una letra específica utilizando una estructura de control condicional (if).
// Autor: Profesorcito
// Fecha: 28/ene/2025

#include <iostream>
#include <string>
using namespace std;

int main() {
    system("chcp 65001");

    string palabra;
    char letra;

    // Solicitar al usuario una palabra
    cout << "Ingresa una palabra: ";
    cin >> palabra;

    // Solicitar al usuario una letra para verificar
    cout << "Ingresa una letra para verificar si la palabra comienza con ella: ";
    cin >> letra;

    // Convertir a minúscula utilizando solo las funciones de la librería string
    if (palabra[0] >= 'A' && palabra[0] <= 'Z') {
        palabra[0] = palabra[0] + ('a' - 'A');
    }
    if (letra >= 'A' && letra <= 'Z') {
        letra = letra + ('a' - 'A');
    }

    // Verificar si la palabra comienza con la letra ingresada (ignorando mayúsculas/minúsculas)
    if (palabra[0] == letra) {
        cout << "¡La palabra comienza con la letra '" << letra << "'!" << endl;
    }

    // Mensaje final
    cout << "Verificación completada." << endl;

    return 0;
}