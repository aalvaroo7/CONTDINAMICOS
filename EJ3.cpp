#include<iostream>
#include<vector>
#include<algorithym>
using namespace std;
int main(){
    vector<int>V={9,4,2,6,8,3};
    sort(V.begin(),V.end());
    for(int i=0;i<V.size();i++){
        cout<<V[i]<<endl;
    }
}
