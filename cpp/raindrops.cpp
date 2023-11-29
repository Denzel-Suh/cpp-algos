#include<iostream>

using namespace std;

namespace raindrops {
    std::string convert(int n){
        std::string finalStr{};
        if(n % 3 == 0){
            finalStr += "Pling";
        }
        if(n % 5  == 0){
            finalStr += "Plang";
        }
        if(n % 7  == 0){
            finalStr += "Plong";
        }
        if(finalStr.empty()){
            finalStr = std::to_string(n);
        }
        return finalStr;
    }
}  // namespace raindrops

int main(){
    int n{100};
    n -= 5 * 10;
    std::cout << "Hello, welcome to the convert program." << std::endl;
    std::cout << "escuses: " << n;//raindrops::convert(7) << std::endl;
    return 0;
}
