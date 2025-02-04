// Proyecto: ManejoDeOperadores
// Archivo: main.cpp
// Este programa demuestra cómo funciona la jerarquía de operadores en C++
// mediante ejemplos de cálculos con operaciones aritméticas y lógicas.
// Programador: Profesorcito
// Fecha: 27/ene/2025

#include <iostream>

int main() {
    int i = 4, j = 7, k = 5, val1, val2;

    // Cálculo de val1:
    // i * j = 4 * 7 = 28
    // 28 / 2 = 14
    // k % 2 = 5 % 2 = 1 (resto de dividir 5 entre 2)
    // 14 + 1 - 3 = 12
    val1 = i * j / 2 + k % 2 - 3;

    // Cálculo de val2:
    // 2 + k = 2 + 5 = 7
    // i * j = 4 * 7 = 28
    // 28 / 7 = 4
    // 4 % 2 = 0 (resto de dividir 4 entre 2)
    // 0 - 3 = -3
    val2 = (i * j / (2 + k)) % 2 - 3;

    // Mostrar los resultados calculados
    std::cout << "val1 = " << val1 << std::endl; // outputs 12
    std::cout << "val2 = " << val2 << std::endl; // outputs -3

    return 0;
}