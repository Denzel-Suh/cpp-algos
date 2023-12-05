#include <iostream>

namespace leap {
    bool is_leap_year(int year){
        bool isLeapYear{false};
        if(year % 4 == 0){  ///Using If statement to check the preliminary condition for leap year.
            isLeapYear = true;
            if(year % 100 == 0) isLeapYear = false;     ///Leap years do no occur exactly every 100 years
            if(year % 400 == 0) isLeapYear = true;      ///but rather occur every 400 years.
        }
        return isLeapYear;
    }
}  // namespace leap

int main(){
    int year{};
    for(int year = 0; year <= 2030; year += 4){
        if(leap::is_leap_year(year)) std::cout << year << " is a leap year." << std::endl;
        else std::cout << year << " is not a leap year!" << std::endl;
    }
    return 0xA;
}
