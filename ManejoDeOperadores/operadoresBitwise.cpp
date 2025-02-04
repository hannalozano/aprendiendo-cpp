// Proyecto: ManejoDeOperadores
// Archivo: operadoresBitwise.cpp
// Este programa muestra cómo los operadores bitwise trabajan a nivel de bits en números enteros.
// Programador: Profesorcito
// Fecha: 27/ene/2025

#include <iostream>
#include <bitset>  // Para visualizar los números en su representación binaria

int main() {
    // Definir dos números para las operaciones bitwise
    unsigned int a = 5;  // 0000 0101 en binario
    unsigned int b = 3;  // 0000 0011 en binario

    // Mostrar los números en su forma binaria y decimal
    std::cout << "a = " << a << " (" << std::bitset<8>(a) << " en binario)\n";
    std::cout << "b = " << b << " (" << std::bitset<8>(b) << " en binario)\n\n";

    // Operador bitwise NOT (~)
    unsigned int not_a = ~a;
    std::cout << "Operador ~ (bitwise NOT) de a: ~a = " << not_a
              << " (" << std::bitset<8>(not_a) << " en binario) - En decimal: " << not_a << "\n\n";

    // Operador bitwise AND (&)
    unsigned int and_ab = a & b;
    std::cout << "Operador & (bitwise AND) de a y b: a & b = " << and_ab
              << " (" << std::bitset<8>(and_ab) << " en binario) - En decimal: " << and_ab << "\n\n";

    // Operador bitwise OR (|)
    unsigned int or_ab = a | b;
    std::cout << "Operador | (bitwise OR) de a y b: a | b = " << or_ab
              << " (" << std::bitset<8>(or_ab) << " en binario) - En decimal: " << or_ab << "\n\n";

    // Operador bitwise XOR (^)
    unsigned int xor_ab = a ^ b;
    std::cout << "Operador ^ (bitwise XOR) de a y b: a ^ b = " << xor_ab
              << " (" << std::bitset<8>(xor_ab) << " en binario) - En decimal: " << xor_ab << "\n\n";

    // Operador de desplazamiento a la izquierda (<<)
    unsigned int shift_left = a << 1;
    std::cout << "Operador << (shift left) de a: a << 1 = " << shift_left
              << " (" << std::bitset<8>(shift_left) << " en binario) - En decimal: " << shift_left << "\n\n";

    // Operador de desplazamiento a la derecha (>>)
    unsigned int shift_right = a >> 1;
    std::cout << "Operador >> (shift right) de a: a >> 1 = " << shift_right
              << " (" << std::bitset<8>(shift_right) << " en binario) - En decimal: " << shift_right << "\n\n";

    // Resumen de lo aprendido
    std::cout << "Resumen de operadores bitwise utilizados:\n";
    std::cout << "~: Invierte los bits (bitwise NOT).\n";
    std::cout << "&: Compara los bits de dos números, resultando en 1 solo si ambos bits son 1 (bitwise AND).\n";
    std::cout << "|: Compara los bits de dos números, resultando en 1 si al menos uno de los bits es 1 (bitwise OR).\n";
    std::cout << "^: Compara los bits de dos números, resultando en 1 si los bits son diferentes (bitwise XOR).\n";
    std::cout << "<<: Desplaza los bits de un número hacia la izquierda (shift left), multiplicando el valor por 2.\n";
    std::cout << ">>: Desplaza los bits de un número hacia la derecha (shift right), dividiendo el valor por 2.\n";

    return 0;
}
