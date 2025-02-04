// Proyecto: ManejoDeOperadores
// Archivo: operadoresIncrementoPrePost.cpp
// Este programa demuestra la diferencia entre los operadores de incremento pre-incremento (++) y post-incremento (++) en C++.
// Se utiliza para entender cómo afectan estos operadores al valor de las variables en una expresión.
// Programador: Profesorcito
// Fecha: 27/ene/2025

#include <bitset>
#include <iostream>

int main() {
    system("chcp 65001");
    int a = 5;

    // Usando el operador post-incremento (a++)
    // En el caso del post-incremento, primero se usa el valor actual de 'a' y luego se incrementa.
    std::cout << "Post-incremento (a++):" << std::endl;
    std::cout << "Valor de a antes de a++: " << a << std::endl;  // Imprime 5
    std::cout << "Resultado de a++: " << a++ << std::endl;      // Imprime 5 (a se incrementa después de la expresión)
    std::cout << "Valor de a después de a++: " << a << std::endl; // Imprime 6

    // Restablecemos 'a' a su valor inicial para probar el pre-incremento
    a = 5;

    // Usando el operador pre-incremento (++a)
    // En el caso del pre-incremento, primero se incrementa el valor de 'a' y luego se usa el valor incrementado.
    std::cout << "\nPre-incremento (++a):" << std::endl;
    std::cout << "Valor de a antes de ++a: " << a << std::endl;  // Imprime 5
    std::cout << "Resultado de ++a: " << ++a << std::endl;      // Imprime 6 (a se incrementa antes de la expresión)
    std::cout << "Valor de a después de ++a: " << a << std::endl; // Imprime 6

    return 0;
}
