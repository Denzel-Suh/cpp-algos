#include "luhn.h"

namespace luhn {
    bool valid(std::string card_no){
        int cards[12]{0,0,0,0,0,0,0,0,0,0,0,0}, count{0};
        std::string clean_no{};
        for(char c: card_no){
            if(isdigit(c)){
                cards[count] += c - '0';
                std::cout << "cards[i]| " << cards[count] << std::endl;
            }
            count++;
        }
        for(int i = 0; i < 12; i++){
            if(i % 2 == 0){
                cards[i] += cards[i];
            }
            std::cout << "Lacy-cards[i]| " << cards[i] << std::endl;
        }
        return false;
    }
}  // namespace luhn

int main(){
    std::cout << luhn::valid("292992--093900");
}