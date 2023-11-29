#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include <functional>
using namespace std;
int main(){
    auto logaritmo=[](double x){return log(x);};
    auto seno=[](double x){return sin(x);};
    auto numeros = std::make_unique<std::vector<int>>(std::vector<int>{1, 2, 3, 4, 5});
    std::for_each(numeros->begin(), numeros->end()
}
