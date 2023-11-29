#include "raindrops.h"

namespace raindrops {
    std::string convert(int n){
        std::string finalStr{};
        if(n % 3 == 0){ finalStr += "Pling"; }
        if(n % 5 == 0){ finalStr += "Plang"; }
        if(n % 7 == 0){ finalStr += "Plong"; }
        if(finalStr.empty()){ finalStr = std::to_string(n); }
        return finalStr;
    }
}  // namespace raindrops