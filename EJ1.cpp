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
