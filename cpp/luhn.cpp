#include "luhn.h"

namespace luhn {
    bool valid(std::string card_no){
        std::string clean_no{};
        for(char c: card_no){
            if(isdigit(c)){
                clean_no += c;
            }
        }
        int card = atoi(clean_no.to_str());
    }
}  // namespace luhn
