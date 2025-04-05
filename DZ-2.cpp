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
	Balance& personOne{ "Ivan", 22222, 6000 };
	Balance& persTwo{ "Petr", 3333, 2000 };
	int setbalance;
	std::cin >> setBalance;
	std::cout << "Enter new balance:" << std::endl;
	newBalance(personOne);
	std::cout << personOne.name << '\t' << personOne.id << '\t' << personOne.balance << '\n';
	std::cout << "Enter new balance:" << std::endl;
	std::cin >> setBalance;
	newBalance(persTwo);
	
	std::cout << persTwo.name << '\t' << persTwo.id << '\t' << persTwo.balance << '\n';














}
void newBalance(Balance& setBalance) {

	
	setBalance = Balance{ balance };
};