#include "difference_of_squares.h"

namespace difference_of_squares {
    int i{};
    int sum{};
    int square_of_sum(int n){
        for(i = 1; i <= n; i++){
            sum += i;
            std::cout << "sum is: " << sum << " and i is: " << i << std::endl;
        }
        return sum * sum;
    }
    int sum_of_squares(int n){
        for(i = 0; i <= n; i++){
            sum += i * i;
            std::cout << "sum is: " << sum << " and i is: " << i << std::endl;
        }
        return sum;
    }
    int difference(int n){
        return square_of_sum(n) - sum_of_squares(n);
    }
}  // namespace difference_of_squares

int main(){
    std::cout << "[Testing 123]" << difference_of_squares::square_of_sum(5) << std::endl;
    return 0;
}