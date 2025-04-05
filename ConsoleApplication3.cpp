

#include <iostream>
#include <string>

struct City {
    std::string city{};
   
    std::string street{};
    int house{};
    
    int flat{};
    int index{};

    void putOnTable();

};

void putOnTable() {

    std::cout << City.city << '\t' << City.street << '\t' << City.house << '\t' << City.flat << '\t' << City.index << std::endl;

}


int main()
{
    City One{ "Moscow", "Krasnaya Ploshad",79,545, 2456 };
    City Two{ "Kaluga", "Lenina", 54, 789, 5656 };

    putOnTable(One);
    putOnTable(Two);
    

   

   


   
    
  

}

