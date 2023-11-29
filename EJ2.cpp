#include <iostream>
#include <stack>
#include <list>
using namespace std;
int main(){
    list<float> lista{1.1,2.2,3.3,4.4,5.5};
    stack<float, list<float>> pila(lista);
    cout << "Elementos de la pila: " << endl;
    while(!pila.empty()){
        cout << pila.top() << endl;
        pila.pop();
    }
    pila.push(6.6);
    pila.push(7.7);
    pila.push(8.8);
    pila.push(9.9);
    pila.push(10.10);

    cout<<"elemento del principio(arriba de la lista)"<<pila.top()<<endl;
    pila.pop();
    cout<<"nuevo elemento despues del pop"<<pila.top()<<endl;
}