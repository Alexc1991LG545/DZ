#include <iostream>

enum Months {
    january = 1, february
    , march, april, may, june, julay, august, september, october, november, december
};
Months getCurrentMonth();

int main()
{
    Months month{ getCurrentMonth() };
    








}

Months getCurrentMonth() {
    Months currentMonth{};

    int month{};
    std::cin >> month;

    
    currentMonth = static_cast<Months>(month);
    std::cout << currentMonth << std::endl;
    return currentMonth;
   


}



















