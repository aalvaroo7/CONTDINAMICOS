#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <iterator>
#include <map>
#include <set>
#include <utility>
#include <string>
#include <vector>
using namespace std;
int main(){
vector<int>mivector ; //creo el vector mivector
mivector.push_back(1);//agrego un elemento al vector
mivector.push_back(2); //agrego otro elemento al vector
mivector.push_back(3); //agrego otro elemento al vector
mivector.push_back(4); //agrego otro elemento al vector
cout<<"El vector tiene componentes:";
for(vector<int>::iterator i=mivector.begin(); i!=mivector.end(),i++) {
    cout << *i << " ";
}
cout<<endl;
return 0;
}