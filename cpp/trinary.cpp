#include "trinary.h"

namespace trinary {
    int to_decimal(std::string tri){
        int deci[10], pb{};
        int *p = deci;
        for(char c: tri){
            pb = c - '0';
            if(pb > 2) std::cout << "Lazlo\n";
            std::cout << "deci is " << deci[0] << " and &deci is " << &deci << " p is " << p << " and *p is " << *p << std::endl;
            *p = pb;
            p++;
        }
        for(int i = 0; i < tri.length(); i++){
            std::cout << "Woody : " << deci[i] << std::endl;
        }
        return 1;
    }
}  // namespace trinary

int main(){
    std::cout << trinary::to_decimal("102");
    return 0;
}