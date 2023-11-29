#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    cout << "Nombres" << endl;
vector<string> personas;
personas.push_back("Juan");
personas.push_back("Pedro");
personas.push_back("Maria");
personas.push_back("Luis");
personas.push_back("Ana");
personas.push_back("Rosa");
personas.push_back("Jose");
//con push_back añadimos elementos al final del vector
vector<string>::iterator it;
//definimos un iterador para recorrer el vector
for(it = personas.begin(); it != personas.end(); it++){
    cout << *it << endl;
}
cout << "numeros" << endl;
vector<int> numeros;
numeros.push_back(1);
numeros.push_back(2);
numeros.push_back(3);
numeros.push_back(4);
numeros.push_back(5);
numeros.push_back(6);
//con push_back añadimos elementos al final del vector
vector<int>::iterator it2;
//definimos un iterador para recorrer el vector
for(it2 = numeros.begin(); it2 != numeros.end(); it2++){
    cout << *it2 << endl;

}