#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>V={9,4,2,6,8,3};
    sort(V.begin(),V.end());
    for(int i=0;i<V.size();i++){
        cout<<V[i]<<endl;
    }
    auto elementomaximo= max_element(V.begin(),V.end());
    cout<<"el elemento maximo es: "<<*elementomaximo<<endl;
    auto elementominimo= min_element(V.begin(),V.end());
    cout<<"el elemento minimo es: "<<*elementominimo<<endl;
    return 0;
}
