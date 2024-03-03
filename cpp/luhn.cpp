#include "luhn.h"

namespace luhn {
    bool valid(std::string card_no){
        std::string encoded{};
        for(char c: card_no){
            if(isdigit(c)){
                encoded += c;
            }
        }
    }
}  // namespace luhn
