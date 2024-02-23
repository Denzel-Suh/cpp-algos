#include "rotational_cipher.h"

namespace rotational_cipher{
    std::string rotate(std::string intext, int key){
        std::string outext {};
        for(char &c: intext){
            if(isalpha(c)){
                int base = islower(c) ? 'a' : 'A';     // To shorten the solution we use a base and avoid checking for lower and upper as well as use mod so we don't have to compare
                outext += (c + key - base) % 26 + base;
                /*if(isupper(c)){                       //Old method redacted to make it shorter
                    (c + key > 90) ? outext += c + key - 26 : outext += c + key;
                }
                else if(islower(c)){
                    (c + key > 122) ? outext += c + key - 26 : outext += c + key;
                }*/
            }
            else outext += c;
        } 
        return outext;
    }
}