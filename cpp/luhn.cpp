#include "luhn.h"

namespace luhn {
    bool valid(std::string card_no){
        std::string clean_no{};
        for(char c: card_no){
            if(isdigit(c)){
                clean_no += c;
            }
        }
        int card = std::stoll(clean_no);
        std::cout << "card = " << card << "| close your eyes| " << clean_no;
        return false;
    }
}  // namespace luhn

int main(){
    luhn::valid("292992--093900 464-46");
}