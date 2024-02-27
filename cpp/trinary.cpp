#include "trinary.h"

namespace trinary {
    int to_decimal(std::string tri){
        int deci{};
        int *p = &deci;
        for(char c: tri){
            if((int)c > 2) return 0;
            p = (int)c;
            p++;
        }
    }
}  // namespace trinary

int main(){
    return 0;
}