#include <iostream>
#include<valarray>
#include<cmath>
using namespace std;
int main(){
    valarray<int> lista={2.2,3.4,6.7,8.9,7.8,6.9}
    valarray<double> suma= lista + 33.3;
    valarray<double> resta= lista - 33.3;
    valarray<double> multiplicacion= lista * 33.3;
    valarray<double> division= lista / 33.3;
    valarray<double> potencia= lista ** 33.3;
    valarray<double> raiz= sqrt(lista);
    valarray<double> logaritmo= log(lista);
    valarray<double> seno= sin(lista);
    valarray<double> coseno= cos(lista);
    valarray<double> tangente= tan(lista);


}
