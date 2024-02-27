#include "trinary.h"

namespace trinary {
    int to_decimal(std::string tri){
        int fnum{}, *p = &fnum, count{}, result{};
        for(char c: tri){
            *p = c - '0';
            p++, count++;
        }
        for(int i = count; i >= 0; i--){
            result = 
        }
        return 1;
    }
}  // namespace trinary

int main(){
    std::cout << trinary::to_decimal("102");
    return 0;
}