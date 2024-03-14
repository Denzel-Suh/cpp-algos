#include <iostream>
#include "making_the_grade.cpp"

using namespace std;

int main(){
    vector<double> round{12.5, 15.7, 98.3,9.9,10.9};
    vector<int> test = round_down_scores(round);
    // for(const auto &i : test) cout << "Results: " << i << endl;;
    test = above_threshold(test, 40);
    for(const auto &i : test) cout << "Results: " << i << endl;;
    return 0;
}