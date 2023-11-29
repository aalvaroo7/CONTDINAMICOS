//el codigo de ruben incluye solo el metodo pop y top , debemos incluir push
#include <iostream>
#include <list>
#include <stack>
using namespace std;
    int main() {
        list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};
        stack<float, std::list<float>> pila(lista);

        while(!pila.empty()) {
            cout << pila.top() << std::endl;
            pila.pop();
        }

        return 0;
    }