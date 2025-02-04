// Proyecto: ManejoDeOperadores
// Archivo: cuentaBancaria.cpp
// Este programa permite gestionar una cuenta bancaria con operaciones de depósito, retiro, consulta de saldo y bonificación por saldo alto.
// Los operadores de asignación se usan para modificar el saldo de la cuenta y se aplican bonificaciones si se cumplen las condiciones.
// Programador: Profesorcito
// Fecha: 27/ene/2025

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>  // Para std::setw

int main() {
    int saldo = 1000;  // Saldo inicial
    std::vector<std::string> historial;  // Historial de transacciones
    int deposito, retiro, opcion;
    int umbralBonificacion = 5000;  // Umbral para bonificación
    double bonificacion = 1.10;  // Bonificación del 10%

    do {
        std::cout << "Saldo actual: $" << saldo << "\n";
        std::cout << "1. Depositar\n2. Retirar\n3. Ver historial\n4. Bonificación\n5. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:  // Depositar
                std::cout << "Ingrese el monto a depositar: $";
                std::cin >> deposito;
                saldo += deposito;
                historial.push_back("Depósito: $" + std::to_string(deposito) + " | Saldo antes: " + std::to_string(saldo - deposito) + " | Saldo después: " + std::to_string(saldo));
                break;
            case 2:  // Retirar
                std::cout << "Ingrese el monto a retirar: $";
                std::cin >> retiro;
                if (retiro > saldo) {
                    std::cout << "Saldo insuficiente.\n";
                } else {
                    saldo -= retiro;
                    historial.push_back("Retiro: $" + std::to_string(retiro) + " | Saldo antes: " + std::to_string(saldo + retiro) + " | Saldo después: " + std::to_string(saldo));
                }
                break;
            case 3:  // Ver historial
                std::cout << "Historial de transacciones:\n";

                // Agregar la consulta del historial al historial
                historial.push_back("Consulta de historial | Saldo antes: " + std::to_string(saldo) + " | Saldo después: " + std::to_string(saldo));

                // Mostrar historial con contador
                for (int i = 0; i < historial.size(); ++i) {
                    std::cout << std::setw(3) << i + 1 << ". " << historial[i] << "\n";
                }
                break;
            case 4:  // Bonificación
                if (saldo > umbralBonificacion) {
                    saldo *= bonificacion;
                    historial.push_back("Bonificación aplicada | Saldo antes: " + std::to_string(saldo / bonificacion) + " | Saldo después: " + std::to_string(saldo));
                    std::cout << "Bonificación aplicada. Nuevo saldo: $" << saldo << "\n";
                } else {
                    // Asegurarse de que el evento quede registrado en el historial
                    historial.push_back("Bonificación no aplicada | Saldo antes: " + std::to_string(saldo) + " | Saldo después: " + std::to_string(saldo));
                    std::cout << "No se alcanzó el umbral para bonificación.\n";
                }
                break;
            case 5:  // Salir
                std::cout << "Saliendo...\n";
                break;
            default:
                std::cout << "Opción no válida.\n";
        }
    } while (opcion != 5);

    return 0;
}