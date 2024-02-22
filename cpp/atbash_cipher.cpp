#include "atbash_cipher.h"

namespace atbash_cipher {
    int i{0};
    std::string encode(std::string text){
        std::string encoded{};
        int l = text.length(), m{0};      //Stores the length of the string
        encoded = atbash_cipher::stripper(text, l);
        m = encoded.length();
        encoded = atbash_cipher::char_swap(encoded, m);
        encoded = atbash_cipher::grouper(encoded, m);
        return encoded;
    }

    std::string char_swap(std::string text, int l){
        for(i = 0; i < l; i++){
            if((text[i] > 96 && text[i] < 123)){
                switch(text[i]){
                    case 'a': text[i] = 'z';
                        break;
                    case 'b': text[i] = 'y';
                        break;
                    case 'c': text[i] = 'x';
                        break;
                    case 'd': text[i] = 'w';
                        break;
                    case 'e': text[i] = 'v';
                        break;
                    case 'f': text[i] = 'u';
                        break;
                    case 'g': text[i] = 't';
                        break;
                    case 'h': text[i] = 's';
                        break;
                    case 'i': text[i] = 'r';
                        break;
                    case 'j': text[i] = 'q';
                        break;
                    case 'k': text[i] = 'p';
                        break;
                    case 'l': text[i] = 'o';
                        break;
                    case 'm': text[i] = 'n';
                        break;
                    case 'n': text[i] = 'm';
                        break;
                    case 'o': text[i] = 'l';
                        break;
                    case 'p': text[i] = 'k';
                        break;
                    case 'q': text[i] = 'j';
                        break;
                    case 'r': text[i] = 'i';
                        break;
                    case 's': text[i] = 'h';
                        break;
                    case 't': text[i] = 'g';
                        break;
                    case 'u': text[i] = 'f';
                        break;
                    case 'v': text[i] = 'e';
                        break;
                    case 'w': text[i] = 'd';
                        break;
                    case 'x': text[i] = 'c';
                        break;
                    case 'y': text[i] = 'b';
                        break;
                    case 'z': text[i] = 'a';
                        break;
                }
            }
        }
        return text;
    }

    std::string grouper(std::string text, int l){
        std::string encoded{};
        for(i = 0; i < l; i++){
            if(((i) % 5 == 0) && (i != 0)){
                encoded += ' ';
            }
            encoded += text[i];
        }
        return encoded;
    }

    std::string decode(std::string text){
        std::string encoded{};
        int m = text.length();
        encoded = stripper(text, m);
        return char_swap(encoded, m);
    }

    std::string stripper(std::string text, int l){
        std::string encoded{};
        for(i = 0; i < l; i++){
            text[i] = tolower(text[i]);
            if((text[i] > 96 && text[i] < 123) || (text[i] > 057 && text[i] < 072)){
                encoded += text[i];
            }
        }
        return encoded;
    }
}  // namespace atbash_cipher