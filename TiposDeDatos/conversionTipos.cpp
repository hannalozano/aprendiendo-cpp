// Proyecto: TiposDeDatos
// Archivo: conversionTipos.cpp
// Este programa demuestra la conversión implícita de un número entero (int) a un número decimal (float).
// Se muestra el valor original del número entero y su valor convertido a float.
// Programador: Profesorcito
// Fecha: 27/ene/2025

#include <iomanip>
#include <iostream>
using namespace std;

int main() {

    system("chcp 65001");

    int num = 10;          // Variable de tipo int
    float decimal = num;   // Conversión implícita de int a float

    cout << "Número entero: " << num << endl;
    cout << "Número convertido a float: " << decimal << endl;
    cout << "Número convertido a float: " << fixed << setprecision(2) << decimal << endl;
    cout << "Número convertido a float: " << fixed << setprecision(4) << decimal << endl;

    return 0;
}
