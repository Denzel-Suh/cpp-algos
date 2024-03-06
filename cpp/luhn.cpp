#include "luhn.h"

namespace luhn{
    bool valid(std::string rawtext){
        std::string card_no{};
        if(rawtext.length() < 2) return false;
        for(char c: rawtext){
            if(isdigit(c)) card_no += c;
            if(!isdigit(c) && c != ' ') return false;
        }
        if(card_no.length() < 2) return false;
        int p{0}, sum{0};       //Placeholder for mod operation is p and sum holds sum of all digits
        for(int i = card_no.length() - 1; i >= 0; i--){
            card_no.length() % 2 == 0 ? p = 0 : p = 1;
            // std::cout << "p = " << p << " and card_no[i] is " << card_no[i] << std::endl;
            if(i % 2 == p) (card_no[i] - '0') * 2 > 9 ? card_no[i] = (card_no[i] * 2) - '0' - 9 : card_no[i] = (card_no[i] - '0') * 2 + '0';
            std::cout << "Card_no[" << i << "] = " << card_no[i] << std::endl; 
            sum += card_no[i] - '0';
        }
        std::cout << "\n\nIntelecto sumo a: " << sum << "\n\n\t";
        if(sum % 10 == 0) return true;
        return false;
    }
}                 

namespace luhn2 {
    bool valid(std::string card_no){
        int cards[16]{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, count{0}, sum{0};
        std::string clean_no{};
        for(char c: card_no){
            if(isdigit(c)){
                cards[count] = c - '0';
                // std::cout << "high cardo " << cards[count] << "\t";
                count++;
            }
        }
        for(int i = 15; i >= 0; i--){
            // std::cout << "mercado cardo " << cards[i] << "\t";
            if(i % 2 == 1){
                cards[i] + cards[i] < 9 ? cards[i] += cards[i] : cards[i] += cards[i] - 9;
            }
            // std::cout << "summer " << sum << "\t";
            sum += cards[i];
        }
        // std::cout << "Sum ore wa: " << sum << "\n";
        if(sum % 10 == 0 && sum / 10 > 0) return true;
        return false;
    }
}  // namespace luhn

int main(){
    std::cout << luhn::valid("0000 0") << std::endl;
    return 0;
}