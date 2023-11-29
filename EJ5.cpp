#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include <cmath>
using namespace std;
int main(){
    auto logaritmo=[](double x){return log(x);};
    auto numeros = std::make_unique<std::vector<int>>(std::vector<int>{1, 2, 3, 4, 5});
    std::for_each(numeros->begin(), numeros->end(),[&logaritmo](int n){
        std::cout << "el logaritmo es" <<logaritmo(n) << std::endl;
    });
}
