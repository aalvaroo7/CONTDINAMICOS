#include <iostream>
#include <string>
#include <vector>
using namespace std;
void mostrarElementos(const vector<string>& elementos) {
    for (const auto& elemento : elementos) {
        cout << elemento << endl;
    }
}
void mostrarElementos(const vector<int>& elementos) {
    for (const auto& elemento : elementos) {
        cout << elemento << endl;
    }
}
int main() {
    cout << "Nombres" << endl;

    vector<string> nombres = {"Juan", "Pedro", "Maria", "Jose", "Luis"};
    mostrarElementos(nombres);
    cout << "Numeros" << endl;

    vector<int> numeros = {1, 2, 3, 4, 5};
    mostrarElementos(numeros);