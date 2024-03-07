#include "hexadecimal.h"

namespace hexadecimal {
    int decimal(std::string text){
        for(char c: text){
            if(!isdigit(c) && !(c > 96 && c < 103)) return 0;
        }
        return 0;
    }
}  // namespace hexadecimal
