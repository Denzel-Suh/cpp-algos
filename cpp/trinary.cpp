#include "trinary.h"

namespace trinary {
    int to_decimal(std::string tri){
        int fnum{}, *p = &fnum, count{}, result{};
        for(char c: tri){
            *p = c - '0';
            std::cout << "*p is " << *p << std::endl;
            p++, count++;
        }
        for(int i = count; i >= 0; i--){
            result += *(p - i) * pow(3, i-1);
            std::cout << "*p - i: " << *(p - i) << "| i: " << pow(3,i-1) << std::endl;
        }
        return result;
    }
}  // namespace trinary

int main(){
    std::cout << trinary::to_decimal("102");
    return 0;
}