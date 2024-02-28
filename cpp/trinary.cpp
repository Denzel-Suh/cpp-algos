#include "trinary.h"

namespace trinary {
    int to_decimal(std::string tri){
        int fnum{}, *p = &fnum, count{}, result{};
        for(char c: tri){
            *p = c - '0';
            p++, count++;
        }
        p = &fnum;
        for(int i = 0; i < count; i++){
            result += *(p - i) * pow(3, i-1);
            std::cout << "*p - i: " << *(p - i) << "| i: " << pow(3,i-1) << std::endl;
        }
        return result;
    }
}  // namespace trinary

int main(){
    std::cout << "102|\n" <<trinary::to_decimal("102");
    return 0;
}