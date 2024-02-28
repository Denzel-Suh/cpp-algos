#include "trinary.h"

namespace trinary {
    int to_decimal(std::string tri){
        int fnum{}, *p = &fnum, count{}, result{};
        for(char c: tri){
            *p = c - '0';
            std::cout << "p| " << p << ":- - -:bizaz| " << *p << std::endl;
            p++, count++;
        }
        p = &fnum;
        for(int i = 0; i < count; i++){
            result += *(p + i) * pow(3, i-1);
            std::cout << "value of i, p+i, *(p+i), power()|" << i << "| " << p+i << "| " << *(p+i) << "| " << pow(3, i) << std::endl;
        }
        return result;
    }
}  // namespace trinary

int main(){
    std::cout << "102|\n" <<trinary::to_decimal("102");
    return 0;
}