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

vector<string>::iterator it;
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