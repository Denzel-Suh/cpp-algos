#include "atbash_cipher.h"

namespace atbash_cipher {
    std::string encode(std::string text){
        std::string encoded{};
        encoded = atbash_cipher::stripper(text, text.length());
        encoded = atbash_cipher::char_swap(encoded, encoded.length());
        encoded = atbash_cipher::grouper(encoded, encoded.length());
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

    std::string char_swap(std::string text, int l){     //Swaps the respective characters with their counterparts after using the atbash cipher
        int i{0};
        for(i = 0; i < l; i++){
            if(isalpha(text[i])){
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

    std::string grouper(std::string text, int l){       //Selects groups of fives and applies the space character as fit
        std::string encoded{};
        int i{0};
        for(i = 0; i < l; i++){
            if(((i) % 5 == 0) && (i != 0)){
                encoded += ' ';
            }
            encoded += text[i];
        }
        return encoded;
    }

    std::string decode(std::string text){               //Decodes words already encoded by the atbash_cipher::encode function
        std::string encoded{};
        encoded = stripper(text, text.length());
        return char_swap(encoded, text.length());
    }

    std::string decode2(std::string intext){            //A second approach to decoding the encoded words. Works by manipulating ASCII value stored in the character type.
        std::string outext;
        for(char &c: intext){
            if(isdigit(c)) outext += c;
            else if(isalpha(c)) outext += 96*2 + 27 - tolower(c);
        }
        return outext;
    }

    std::string stripper(std::string text, int l){      //Strips word to be encoded of all spaces, punctuations and unwanted characters leaving only letters and numbers
        int i{0};
        std::string encoded{};
        for(i = 0; i < l; i++){
            text[i] = tolower(text[i]);
            if(isalpha(text[i])){
                encoded += text[i];
            }
        }
        return encoded;
    }
}  // namespace atbash_cipher