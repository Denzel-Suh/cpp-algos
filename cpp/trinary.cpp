#include "trinary.h"

namespace trinary {
    int to_decimal(std::string tri){
        int fnum[15], *p = fnum, count{}, result{};
        for(char c: tri){               //Use a loop to go through the string
            if(c > 50 || c < 48) return 0;        //Checks if character is greater than 2, hence not a trinary and returns 0
            *p = c - '0';
            p++, count++;
        }
        p = fnum;                       //re-initialize the pointer location
        for(int i = 0; i < count; i++){
            result += *(p + i) * pow(3, count - i - 1);
        }
        return result;
    }
    int to_decimal2(std::string tri){
        int result{};
        for(char c: tri){
            if(c < 48 || c > 50) return 0;
            result = result * 3 + c - '0';
        }
        return result;
    }
}  // namespace trinary