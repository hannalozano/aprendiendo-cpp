// Proyecto: ManejoDeOperadores
// Archivo: gestionPermisos.cpp
// Este programa muestra cómo los operadores bitwise trabajan a nivel de bits en números enteros.
// Se utiliza para gestionar permisos en un archivo representados mediante bits.
// Programador: Profesorcito
// Fecha: 27/ene/2025

#include <iostream>
#include <bitset>

// Definimos una constante para cada permiso
const int PERMISO_LECTURA = 0b100;
const int PERMISO_ESCRITURA = 0b010;
const int PERMISO_EJECUCION = 0b001;

int main() {
    // Inicializamos permisos sin ningún permiso activado
    int permisos = 0b000;

    // Explicación de la representación de permisos
    std::cout << "Representación de permisos:\n";
    std::cout << "bit 2 -> Lectura\n";
    std::cout << "bit 1 -> Escritura\n";
    std::cout << "bit 0 -> Ejecución\n\n";

    int opcion;

    // Ciclo principal del menú
    do {
        std::cout << "\nMenú de Permisos:\n";
        std::cout << "1. Agregar permiso de lectura\n";
        std::cout << "2. Quitar permiso de lectura\n";
        std::cout << "3. Agregar permiso de escritura\n";
        std::cout << "4. Quitar permiso de escritura\n";
        std::cout << "5. Agregar permiso de ejecución\n";
        std::cout << "6. Quitar permiso de ejecución\n";
        std::cout << "7. Ver permisos actuales\n";
        std::cout << "8. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: // Agregar permiso de lectura
                permisos |= PERMISO_LECTURA;
                std::cout << "Permiso de lectura agregado.\n";
                break;
            case 2: // Quitar permiso de lectura
                permisos &= ~PERMISO_LECTURA;
                std::cout << "Permiso de lectura quitado.\n";
                break;
            case 3: // Agregar permiso de escritura
                permisos |= PERMISO_ESCRITURA;
                std::cout << "Permiso de escritura agregado.\n";
                break;
            case 4: // Quitar permiso de escritura
                permisos &= ~PERMISO_ESCRITURA;
                std::cout << "Permiso de escritura quitado.\n";
                break;
            case 5: // Agregar permiso de ejecución
                permisos |= PERMISO_EJECUCION;
                std::cout << "Permiso de ejecución agregado.\n";
                break;
            case 6: // Quitar permiso de ejecución
                permisos &= ~PERMISO_EJECUCION;
                std::cout << "Permiso de ejecución quitado.\n";
                break;
            case 7: // Ver permisos actuales
                std::cout << "Permisos actuales (en binario): " << std::bitset<3>(permisos) << "\n";
                std::cout << "Permisos actuales (en decimal): " << permisos << "\n";
                break;
            case 8: // Salir
                std::cout << "Saliendo del programa.\n";
                break;
            default:
                std::cout << "Opción no válida.\n";
                break;
        }
    } while (opcion != 8);  // El ciclo sigue hasta que el usuario elija salir

    return 0;
}