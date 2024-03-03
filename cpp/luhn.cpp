#include "luhn.h"

namespace luhn {
    bool valid(std::string card_no){
        std::string clean_no{};
        for(char c: card_no){
            if(isdigit(c)){
                clean_no += c;
            }
        }
        int card = atoi(clean_no.c_str());
        std::cout << "card = " << card << "| close your eyes| " << clean_no;
        return false;
    }
}  // namespace luhn

int main(){
    luhn::valid("2929929--090 289 27");
}