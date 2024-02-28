#include "trinary.h"

namespace trinary {
    int to_decimal(std::string tri){
        int fnum[15], *p = fnum, count{}, result{};
        for(char c: tri){
            *p = c - '0';
            p++, count++;
        }
        p = fnum;
        for(int i = 0; i < count; i++){
            result += *(p + i) * pow(3, count - i - 1);
        }
        return result;
    }
}  // namespace trinary