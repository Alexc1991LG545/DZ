// DZ - 2.0.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <string>



struct Balance {
	std::string name{};
	int id{};
	int balance{};
	


};
void Balance::setNewBalance(Balance& int newBalance);
int main() {
	
	Balance personOne{};
	std::cout << "Enter your name:" << std::endl;
	std::cin >> personOne.name;
	std::cout << "Enter your id:" << std::endl;
	std::cin >> personOne.id;
	std::cout << "Enter your balance:" << std::endl;
	std::cin >> personOne.balance;
	int newBalance;
	std::cin >> newBalance;
	personOne.setNewBalance(newBalance);
	

	std::cout << personOne.name << '\t' << personOne.id <<personOne.setNewBalance(newBalance) <<'\t'   << std::endl;

}


void Balance::setNewBalance (Balance& int newBalance) {
	
	 balance = newBalance ;
}