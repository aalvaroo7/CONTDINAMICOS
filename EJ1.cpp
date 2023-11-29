#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Función para mostrar los elementos de un vector de strings
void mostrarElementos(const vector<string>& elementos) {
    for (const auto& elemento : elementos) {
        cout << elemento << endl;
    }
}
// Función para mostrar los elementos de un vector de enteros
void mostrarElementos(const vector<int>& elementos) {
    for (const auto& elemento : elementos) {
        cout << elemento << endl;
    }
}
int main() {
    cout << "Nombres" << endl;
    // Vector de nombres
    vector<string> nombres = {"Juan", "Pedro", "Maria", "Jose", "Luis"};
    mostrarElementos(nombres);
    cout << "Numeros" << endl;

    vector<int> numeros = {1, 2, 3, 4, 5};
    mostrarElementos(numeros);
    return 0;
}