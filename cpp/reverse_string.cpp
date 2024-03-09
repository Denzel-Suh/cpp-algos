#include "reverse_string.h"

namespace reverse_string {
    std::string reverse_string(std::string text){
        char temp{};
        for(int i = 0; i < text.length()/2; i++){
            temp = text[i];
            text[i] = text[text.length() - i - 1];
            text[text.length() - i - 1] = temp;
        }
        return text;
    }
}  // namespace reverse_string