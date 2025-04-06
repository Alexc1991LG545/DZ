// enum 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
enum Months {
    january = 1, february
    , march, april, may, june, julay, august, september, october, november, december
};


int main()
{
    int month{};
    do {
        std::cout << "enter current month:" << '\t' << std::endl;

        std::cin >> month;
        Months currentMonth{ static_cast<Months>(month) };

        switch (month) {
        case Months::january:
            std::cout << "january!!" << std::endl;

            break;
        case Months::february:
            std::cout << "february!!" << std::endl;

            break;
        case Months::march:
            std::cout << "march!!" << std::endl;

            break;
        case Months::april:
            std::cout << "april!!" << std::endl;
           
            break;
        case Months::may:
            std::cout << "may!!" << std::endl;

            break;
        case Months::june:
            std::cout << "june!!" << std::endl;

            break;
        case Months::julay:
            std::cout << "julay!!" << std::endl;

            break;
        case Months::august:
            std::cout << "august!!" << std::endl;

            break;
        case Months::september:
            std::cout << "september!!" << std::endl;

            break;
        case Months::october:
            std::cout << "october!!" << std::endl;

            break;
        case Months::november:
            std::cout << "november!!" << std::endl;

            break;
        case Months::december:
            std::cout << "december!!" << std::endl;

            break;
        default:
            std::cout << "this is mistake" << std::endl;

            break;
        }

    } while (month != 0);
    { std::cout << " Thank you" << std::endl; }

    return 0;
}