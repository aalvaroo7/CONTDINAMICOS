#include <iostream>
#include<vector>
#include<list>
#include<stack>
#include<valarray>
#include<cmath>
using namespace std;
int main(){
    valarray<double> lista={2.2,3.4,6.7,8.9,7.8,6.9};
    valarray<double> suma= lista + 33.3;
    valarray<double> resta= lista - 33.3;
    valarray<double> multiplicacion= lista * 33.3;
    valarray<double> division= lista / 33.3;
    valarray<double> raiz= sqrt(lista);
    valarray<double> logaritmo= log(lista);
    valarray<double> seno= sin(lista);
    valarray<double> coseno= cos(lista);
    valarray<double> tangente= tan(lista);

    cout<<"suma +10" <<endl;
for(double l:suma){
    cout<<l<<endl;
    cout <<"resta -10"<<endl;
    for(double l:resta){
    cout<<l<<endl;
        cout<<"multiplicacion *10"<<endl;
        for(double l:multiplicacion){
            cout<<l<<endl;
            cout<<"division /10"<<endl;
            for(double l:division){
                cout<<l<<endl;
                cout<<"raiz cuadrada"<<endl;
                for(double l:raiz){
                    cout<<l<<endl;
                    cout<<"logaritmo"<<endl;
                    for(double l:logaritmo){
                        cout<<l<<endl;
                        cout<<"seno"<<endl;
                        for(double l:seno){
                            cout<<l<<endl;
                            cout<<"coseno"<<endl;
                            for(double l:coseno){
                                cout<<l<<endl;
                                cout<<"tangente"<<endl;
                                for(double l:tangente){
                                    cout<<l<<endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
}
