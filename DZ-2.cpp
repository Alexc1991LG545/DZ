// DZ-2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.


#include <iostream>
#include <string>

struct Balance {
	std::string name{};
	int id{};
	int balance{};



};
void newBalance(Balance& person);


int main() {
	Balance personOne{ "Ivan", 22222, 6000 };
	Balance personTwo;
	std::cin >> PersonTwo.name;
	std::cout << PersonTwo.name << std::endl;
	newBalance(personOne);

	std::cout << personOne.name << '\t' << personOne.id << '\t' << personOne.balance << '\n';















}
void newBalance(Balance& person) {

	std::cout << "Enter new balance:" << std::endl;
	std::cin >> person.balance;

};