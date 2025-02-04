// Proyecto: TiposDeDatos
// Archivo: main.cpp
// Este programa es una introducción a los tipos de datos básicos en C++.
// Programador: Profesorcito
// Fecha: 27/ene/2025

#include <iostream>
#include <string>  // Para usar el tipo string
using namespace std;

int main() {
    // Uso de 'signed' (por defecto en 'int') y 'unsigned'
    signed int num1 = -10;  // Almacena valores negativos
    unsigned int num2 = 10;  // Solo almacena valores positivos

    // Uso de 'short' y 'long' para modificar el tamaño de los enteros
    short int smallValue = 32767;  // Valor pequeño, solo puede almacenar valores hasta 32767
    long int largeValue = 2147483647;  // Valor largo, más grande que el 'int' tradicional

    // Uso de 'long long' para valores aún más grandes
    long long int veryLargeValue = 9223372036854775807;  // Valor máximo para 'long long'

    // Uso de 'bool' para representar valores lógicos
    bool isPositive = num2 > 0;  // Verifica si num2 es mayor que 0

    // Uso de 'string' para almacenar una cadena de texto
    string greeting = "¡Hola, mundo de C++!";

    // Imprimir los resultados
    cout << "Valor con signo (signed int): " << num1 << endl;
    cout << "Valor sin signo (unsigned int): " << num2 << endl;
    cout << "Valor pequeño (short int): " << smallValue << endl;
    cout << "Valor largo (long int): " << largeValue << endl;
    cout << "Valor muy largo (long long int): " << veryLargeValue << endl;

    // Imprimir los resultados de 'bool' y 'string'
    cout << "¿Es num2 positivo? " << (isPositive ? "Sí" : "No") << endl;  // Uso del operador ternario
    cout << "Mensaje de saludo: " << greeting << endl;

    return 0;
}