// ConsoleApplication enum 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iostream>
enum Months {
    january = 1, february
    , march, april, may, june, julay, august, september, october, november, december
};


int main()
{
    std::cout << "enter current month:" << '\t' << std::endl;
    int month{};
    std::cin >> month;
    Months currentMonth{ static_cast<Months>(month) };

    

    
    while (month != 0)
    {
       
        
        std::cin >> month;


    }

    std::cout << " Thank you" << std::endl;
}