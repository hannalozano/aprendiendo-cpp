// Proyecto: ManejoDeOperadores
// Archivo: operadoresLogicosRelacionales.cpp
// Este programa evalúa expresiones usando operadores de igualdad, relacionales y lógicos.
// Incluye ejemplos prácticos y casos complejos para su análisis.
// Programador: Profesorcito
// Fecha: 27/ene/2025

#include <iostream>

int main() {
    std::cout << "Exploración de Operadores Lógicos y Relacionales\n\n";

    // Caso 1: Evaluación con AND y OR combinados
    bool caso1 = (5 < 3) && (6 <= 6) || (5 != 6);
    std::cout << "Caso 1: (5 < 3) && (6 <= 6) || (5 != 6) = "
              << (caso1 ? "true" : "false") << "\n";

    // Caso 2: Uso de paréntesis para alterar la precedencia
    bool caso2 = (5 < 3) && ((6 <= 6) || (5 != 6));
    std::cout << "Caso 2: (5 < 3) && ((6 <= 6) || (5 != 6)) = "
              << (caso2 ? "true" : "false") << "\n";

    // Caso 3: Negación de una combinación compleja
    bool caso3 = !((5 < 3) && ((6 <= 6) || (5 != 6)));
    std::cout << "Caso 3: !((5 < 3) && ((6 <= 6) || (5 != 6))) = "
              << (caso3 ? "true" : "false") << "\n";

    // Caso 4: Evaluación condicional con cortocircuito
    bool ladoIzquierdoEvaluado = false;
    bool caso4 = (ladoIzquierdoEvaluado = (6 <= 6)) || (5 < 3);
    std::cout << "Caso 4: (ladoIzquierdoEvaluado = (6 <= 6)) || (5 < 3) = "
              << (caso4 ? "true" : "false") << "\n";
    std::cout << "El valor de ladoIzquierdoEvaluado es: "
              << (ladoIzquierdoEvaluado ? "true" : "false") << "\n";

    // Caso 5: Uso avanzado de negación y AND
    bool caso5 = !(5 != 6 && (6 > 5 || 3 < 2));
    std::cout << "Caso 5: !(5 != 6 && (6 > 5 || 3 < 2)) = "
              << (caso5 ? "true" : "false") << "\n";

    // Caso 6: Ejemplo práctico - Decidir si salir a caminar
    bool estaLloviendo = false;
    bool tienesTiempoLibre = true;
    bool salirACaminar = !estaLloviendo && tienesTiempoLibre; // Evaluar
    std::cout << "Caso 6: ¿Puedo salir a caminar?\n";
    std::cout << "Respuesta: " << (salirACaminar ? "Sí, puedes salir." : "No, no puedes salir.") << "\n";
    std::cout << "Explicación: La condición combina el operador NOT (!) y AND (&&).\n";
    std::cout << "Si no está lloviendo y tienes tiempo libre, puedes aprovechar para salir.\n";
    std::cout << "Esta es la magia de la lógica aplicada a nuestra vida cotidiana.\n\n";

    // Conclusión
    std::cout << "Estos casos ilustran cómo los operadores lógicos y relacionales trabajan en conjunto.\n";
    std::cout << "Recuerda que el orden de evaluación y el uso de paréntesis son claves para obtener el resultado esperado.\n";

    return 0;
}