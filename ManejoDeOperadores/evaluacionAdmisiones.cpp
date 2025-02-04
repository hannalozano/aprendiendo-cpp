// Proyecto: ManejoDeOperadores
// Archivo: evaluacionAdmisiones.cpp
// Este programa evalúa si un estudiante cumple los requisitos de admisión a una universidad.
// Programador: Profesorcito
// Fecha: 27/ene/2025

#include <iostream>
#include <string>

int main() {
    // Variables de entrada
    int edad;
    float promedio;
    int experienciaLaboral; // Años de experiencia laboral
    bool requisitosAdicionales;

    // Solicitar información del usuario
    std::cout << "Ingrese su edad: ";
    std::cin >> edad;

    std::cout << "Ingrese su promedio escolar (0.0 - 10.0): ";
    std::cin >> promedio;

    std::cout << "Ingrese sus años de experiencia laboral: ";
    std::cin >> experienciaLaboral;

    std::cout << "¿Ha cumplido con los requisitos adicionales? (1 para Sí, 0 para No): ";
    std::cin >> requisitosAdicionales;

    // Evaluar criterios de admisión usando operadores relacionales y lógicos
    bool cumpleEdad = edad >= 18 && edad <= 35; // Edad entre 18 y 35 años
    bool cumplePromedio = promedio >= 8.0; // Promedio mínimo de 8.0
    bool cumpleExperiencia = experienciaLaboral >= 2 || requisitosAdicionales; // Experiencia mínima de 2 años o cumplir requisitos adicionales

    // Evaluar si es admitido
    bool admitido = cumpleEdad && cumplePromedio && cumpleExperiencia;

    // Mostrar resultados
    std::cout << "\nResultados de la evaluación:\n";
    std::cout << "Cumple con el rango de edad (18-35): " << (cumpleEdad ? "Sí" : "No") << std::endl;
    std::cout << "Cumple con el promedio mínimo (>= 8.0): " << (cumplePromedio ? "Sí" : "No") << std::endl;
    std::cout << "Cumple con experiencia laboral o requisitos adicionales: " << (cumpleExperiencia ? "Sí" : "No") << std::endl;

    std::cout << "\nEstado final de admisión: " << (admitido ? "¡Admitido!" : "No admitido. Inténtalo de nuevo.") << std::endl;

    return 0;
}
