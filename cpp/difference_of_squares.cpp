#include "difference_of_squares.h"

namespace difference_of_squares {
    int i{};
    int sum{};
    int square_of_sum(int n){
        for(i = 1; i <= n; i++){
            sum += n;
        }
        return sum * sum;
    }
    int sum_of_squares(int n){
        for(i = 0; i <= n; i++){
            sum += n * n;
        }
        return sum;
    }
    int difference(int n){
        return square_of_sum(n) - sum_of_squares(n);
    }
}  // namespace difference_of_squares
