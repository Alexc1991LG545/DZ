

#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

class Address {
    std::string city;
    std::string street;
    int house;
    int flat;
public:
    Address(std::string city, std::string street, int house, int flat) {
        this->city = city;
        this->street = street;
        this->house = house;
        this->flat = flat;
    }
    std::string get_output_address() {
        std::string tmpString = city + ", " + street + ", " + std::to_string(house) + ", " + std::to_string(flat);
        return tmpString;
    }
};

int main()
{
    SetConsoleOutputCP(1251);
    Address** ad;
    int addrCount{};
    std::string lCity;
    std::string lStreet;
    int lHouse;
    int lFlat;
    std::ifstream fin{ "in.txt" };
    if (fin.is_open()) {
        if (fin >> addrCount) {
            ad = new Address * [addrCount];
            for (int i = 0; i < addrCount; ++i) {
                fin >> lCity >> lStreet >> lHouse >> lFlat;
                ad[i] = new Address(lCity, lStreet, lHouse, lFlat);
            }
            std::ofstream fout{ "out.txt" };
            if (fout.is_open()) {
                fout << addrCount << std::endl;
                for (int i = addrCount - 1; i >= 0; --i) {
                    fout << ad[i]->get_output_address() << std::endl;
                }
                fout.close();
                for (int i = 0; i < addrCount; ++i) {
                    delete ad[i];
                }
                delete[] ad;
            }
            else {
                std::cout << "Не получилось открыть файл! \"out.txt\"" << std::endl;
            }
        }
        fin.close();
    }
    else {
        std::cout << "Не получилось открыть файл! \"in.txt\"" << std::endl;
    }
}