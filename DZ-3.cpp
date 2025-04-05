// DZ-3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

struct City {
    std::string city{};

    std::string street{};
    int house{};

    int flat{};
    int index{};

    

};

void putOnTable(City& structure) 
{
    std::cout << structure.city << '\t' << structure.street << '\t' << structure.house << '\t' << structure.flat << '\t' << structure.index << std::endl;
}


int main()
{
    City One{ "Moscow", "Krasnaya Ploshad",79,545, 2456 };
    City Two{ "Kaluga", "Lenina", 54, 789, 5656 };

    putOnTable(One);
    putOnTable(Two);
}
