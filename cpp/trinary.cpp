#include "trinary.h"

namespace trinary {
    int to_decimal(std::string tri){
        int *deci;
        int *p = deci;
        for(char c: tri){
            std::cout << "---c is: " << c <<  "---";
            if(std::stoi(c, nullptr, 10) > 2) return 0;
            *p = c;
            p++;
        }
        for(int i = 0; i < tri.length(); i++){
            std::cout << "Woody : " << deci[i] << std::endl;
        }
        return 1;
    }
}  // namespace trinary

int main(){
    std::cout << "Sid is (function) " << trinary::to_decimal("122");
    return 0;
}