

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

    switch (month) {
    case Months::january:
        std::cout << "january!!" << std::endl;
        std::cin >> month;
        break;
    case Months::february:
        std::cout << "february!!" << std::endl;
        std::cin >> month;
        break;
    case Months::march:
        std::cout << "march!!" << std::endl;
        std::cin >> month;
        break;
    case Months::april:
        std::cout << "april!!" << std::endl;
        std::cin >> month;
        break;
    case Months::may:
        std::cout << "may!!" << std::endl;
        std::cin >> month;
        break;
    case Months::june:
        std::cout << "june!!" << std::endl;
        std::cin >> month;
        break;
    case Months::julay:
        std::cout << "julay!!" << std::endl;
        std::cin >> month;
        break;
    case Months::august:
        std::cout << "august!!" << std::endl;
        std::cin >> month;
        break;
    case Months::september:
        std::cout << "september!!" << std::endl;
        std::cin >> month;
        break;
    case Months::october:
        std::cout << "october!!" << std::endl;
        std::cin >> month;
        break;
    case Months::november:
        std::cout << "november!!" << std::endl;
        std::cin >> month;
        break;
    case Months::december:
        std::cout << "december!!" << std::endl;
        std::cin >> month;
        break;
    default:
        std::cout << "this is mistake" << std::endl;
        std::cin >> month;
        break;
    }
    while (month != 0)
    {

    }

    std::cout << " Thank you" << std::endl;
}