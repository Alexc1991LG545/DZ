

#include <iostream>
#include <string>

struct City {
    std::string city{};
   
    std::string street{};
    int house{};
    
    int flat{};
    int index{};

    

};

void setNewCity(City& newCity);
void setNewStreet(City& newStreet);
void setNewHouse(City& newHouse);
void setNewFlat(City& newFlat);
void setNewIndex(City& newIndex);



int main()
{
   
    City p{};
    setNewCity(p);
    setNewStreet(p);
    setNewHouse(p);
    setNewFlat(p);
    setNewIndex(p);

   

    std::cout << p.city << '\t' << p.street << '\t' << p.house << '\t' << p.flat << '\t' << p.index << std::endl;


   
    
  

}


void setNewCity(City& newCity) {

    std::cout << "Establish new city:" << std::endl;
    std::cin >> newCity.city;

}
void setNewStreet(City& newStreet) {

    std::cout << "Establish new street:" << std::endl;
    std::cin >> newStreet.street;
}
void setNewHouse(City& newHouse) {

    std::cout << "Establish new house:" << std::endl;
    std::cin >> newHouse.house;
}
void setNewFlat(City& newFlat) {

    std::cout << "Establish new flat:" << std::endl;
    std::cin >> newFlat.flat;
}
void setNewIndex(City& newIndex) {

    std::cout << "Establish new index:" << std::endl;
    std::cin >> newIndex.index;
}