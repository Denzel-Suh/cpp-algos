#include <iostream>
#include "making_the_grade.cpp"

using namespace std;

int main(){
    vector<double> round{12.5, 15.7, 98.3,9.9,10.9};
    vector<int> test = above_threshold();
    for(const auto &i : test) cout << "Results: " << i << endl;;
    return 0;
}