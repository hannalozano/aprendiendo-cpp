// Proyecto: ManejoDeOperadores
// Archivo: operadoresAsignacion.cpp
// Este programa demuestra el uso de varios operadores de asignación y el operador coma (",") en C++.
// El operador coma permite ejecutar múltiples expresiones en una misma línea, mientras que los operadores
// de asignación como "/=" y ">>=" permiten modificar el valor de las variables de forma eficiente.
// Programador: Profesorcito
// Fecha: 27/ene/2025

#include <iostream>

int main() {
    system("chcp 65001");
    // Definir algunas variables para trabajar
    int a = 20, b = 10, c = 60, d = 200;

    // Explicación del operador coma (,)
    // El operador coma (,) se llama **operador de secuencia** o **operador coma**.
    // Permite ejecutar varias expresiones dentro de una misma instrucción.
    // Las expresiones se ejecutan de izquierda a derecha, pero el valor de la expresión
    // es el de la última expresión. Es útil cuando queremos realizar varias operaciones
    // y devolver el valor de la última de ellas.

    std::cout << "Valor inicial de a: " << a << ", b: " << b << ", c: " << c << ", d: " << d << std::endl;

    // Usando el operador coma para realizar varias asignaciones
    // Primero, se asigna 10 a b, luego 20 a c, y finalmente el valor de c (20) a a.
    a = (b = 10, c = 20);

    std::cout << "Después de usar el operador coma (secuencia):" << std::endl;
    std::cout << "a: " << a << ", b: " << b << ", c: " << c << ", d: " << d << std::endl;

    // Ahora con el operador /= (división)
    // Dividimos a por 2, b por 5, c por 10 y luego asignamos el resultado de a / b
    a /= 2;  // a = a / 2
    b /= 5;  // b = b / 5
    c /= 10; // c = c / 10

    std::cout << "Después de usar el operador /= (división):" << std::endl;
    std::cout << "a: " << a << ", b: " << b << ", c: " << c << ", d: " << d << std::endl;

    // Usando el operador de desplazamiento a la derecha (>>= 2)
    // Desplazamos a a la derecha 2 bits, es decir, dividimos a entre 4 (equivalente a a = a / 4).
    a >>= 2;  // a = a >> 2, es equivalente a a / 4

    std::cout << "Después de usar el operador >>= (desplazamiento a la derecha):" << std::endl;
    std::cout << "a: " << a << ", b: " << b << ", c: " << c << ", d: " << d << std::endl;

    // También podemos usar el operador coma para realizar más operaciones en una sola línea:
    // Primero, se realiza la suma en a, resta en b, multiplicación en c y luego se asigna el
    // valor de a * b a d.
    d = (a += 5, b -= 2, c *= 3, a * b);

    std::cout << "Después de usar coma con operadores adicionales:" << std::endl;
    std::cout << "a: " << a << ", b: " << b << ", c: " << c << ", d: " << d << std::endl;

    return 0;
}
