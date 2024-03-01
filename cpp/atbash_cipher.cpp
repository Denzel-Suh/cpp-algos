#include "atbash_cipher.h"

namespace atbash_cipher {
    std::string char_swap(std::string text);
    std::string grouper(std::string text);
    std::string stripper(std::string text);
    
    std::string encode(std::string text){
        std::string encoded{};
        encoded = atbash_cipher::stripper(text);
        encoded = atbash_cipher::char_swap(encoded);
        encoded = atbash_cipher::grouper(encoded);
        return encoded;
    }

    std::string encode2(std::string intext){            // Encodes the given text by manipulating value of the ASCII stored in the character data type. Also applies space to group in fives.
        std::string outext{};
        int count{};
        for(char &c: intext){
            if(isalpha){
                if(count % 5 == 0 && count > 0) outext += ' ';
                outext += (96 * 2 + 27 - tolower(c));
                count++;
            }
            else if(isdigit(c)){
                if(count % 5 == 0 && count > 0) outext += ' ';
                outext += c;
                count++;
            }
        }
        return outext;
    }

    std::string char_swap(std::string text){
        for(char &c: text){
            if(isalpha(c)) c = 122 - c + 97;
        }
        return text;
    }

    std::string grouper(std::string text){       //Selects groups of fives and applies the space character as fit
        std::string encoded{};
        int i{0};
        for(i = 0; i < text.length(); i++){
            if(((i) % 5 == 0) && (i != 0)){
                encoded += ' ';
            }
            encoded += text[i];
        }
        return encoded;
    }

    std::string decode(std::string text){               //Decodes words already encoded by the atbash_cipher::encode function
        std::string encoded{};
        encoded = stripper(text);
        return char_swap(encoded);
    }

    std::string decode2(std::string intext){            //A second approach to decoding the encoded words. Works by manipulating ASCII value stored in the character type.
        std::string outext;
        for(char &c: intext){
            if(isdigit(c)) outext += c;
            else if(isalpha(c)) outext += 96*2 + 27 - tolower(c);
        }
        return outext;
    }

    std::string stripper(std::string text){      //Strips word to be encoded of all spaces, punctuations and unwanted characters leaving only letters and numbers
        std::string encoded{};
        for(char c: text){
            c = tolower(c);
            if(isalpha(c)){
                encoded += c;
            }
        }
        return encoded;
    }
}  // namespace atbash_cipher

int main(){
    std::cout << "Answer| " << atbash_cipher::encode("yes");
}