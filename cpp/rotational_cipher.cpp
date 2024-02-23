#include "rotational_cipher.h"

namespace rotational_cipher{
    std::string rotate(std::string intext, int key){
        std::string outext {};
        int holding{};
        for(char &c: intext){
            if(isalpha(c)){
                if(isupper(c)){
                    (c + key > 90) ? outext += c + key - 25 : outext += c + key;
                }
                else if(islower(c)){
                    (c + key > 122) ? outext += c + key - 25 : outext += c + key;
                }
            }
            else outext += c;
        } 
        return outext;
    }
}

int main(){
    std::cout << "WAKAW: " << rotational_cipher::rotate("The quick brown fox jumps over the lazy dog.", 13);
    return 0;
}