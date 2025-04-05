// DZ2.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

struct Balance {
	std::string name{};
	int id{};
	int balance{};
	void setNewBalance(int newBalance);
	
	
};


int main() {
	int newBalance;
	std::cin >> newBalance;
	Balance personOne {};
	std::cout << "Enter your name:" << std::endl;
	std::cin >> personOne.name;
	std::cout << "Enter your id:" << std::endl;
	std::cin >> personOne.id;
	std::cout << "Enter your balance:" << std::endl;
	std::cin >> personOne.balance;
	personOne.setNewBalance(newBalance);
	
	std::cout << personOne.name << '\t' << personOne.id << '\t' << personOne.balance << std::endl;

}


void Balance::setNewBalance(int newBalance) {
	balance = newBalance;

}