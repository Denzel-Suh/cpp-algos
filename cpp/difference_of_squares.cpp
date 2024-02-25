#include "difference_of_squares.h"

namespace difference_of_squares {
    int i{};
    int square_of_sum(int n){
        return n*(n+1)/2 * n*(n+1)/2;
    }
    int sum_of_squares(int n){
        return n*(n+1)*(2*n+1)/6;
    }
    int difference(int n){
        return square_of_sum(n) - sum_of_squares(n);
    }
}  // namespace difference_of_squares

int main(){
    std::cout << "[Testing 123]" << difference_of_squares::sum_of_squares(5) << std::endl;
    return 0;
}
