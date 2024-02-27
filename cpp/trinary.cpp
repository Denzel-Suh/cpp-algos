#include "trinary.h"

namespace trinary {
    int to_decimal(std::string tri){
        int *deci;
        int *p = deci;
        std::cout << "p is: " << p << " | *p is: " << *p;
        for(char c: tri){
            if((int)c > 2) return 0;
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
    trinary::to_decimal("123");
    return 0;
}