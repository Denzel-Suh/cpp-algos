#include "darts.h"

namespace darts {
    int score(float x, float y){
        if(x*x + y*y <= 100){
            if(x*x + y*y <= 25){
                if(x*x + y*y <= 1) return 10;
                return 5;
            }
            return 1;
        }
        return 0;
    }
} // namespace darts

int main(){
    std::cout << darts::score(0.8,-0.8);
    return 0;
}