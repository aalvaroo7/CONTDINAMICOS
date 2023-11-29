#include <iostream>
#include <boost/lexical_cast.hpp>

int main() {
    try {
        // Ingresa una cadena de caracteres
        std::cout << "Ingresa una cadena de caracteres para convertir a entero: ";
        std::string s;
        std::cin >> s;

        // Intenta convertir la cadena a un número entero usando boost::lexical_cast
        int i = boost::lexical_cast<int>(s);

        // Imprime el resultado si la conversión es exitosa
        std::cout << "Número: " << i << std::endl;
    } catch (const boost::bad_lexical_cast& e) {
        // Captura y maneja la excepción en caso de un error de conversión
        std::cerr << "Error de conversión: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        // Captura y maneja otras excepciones posibles
        std::cerr << "Error inesperado: " << e.what() << std::endl;
    }

    return 0;
}