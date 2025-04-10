// 000.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

struct Balance {
    int id;
    std::string name;
    double balance = 0;
};

int newBalance(int c, Balance& num1) {
    std::cout << "Введите новый баланс:\n";
    std::cin >> c;
    num1.balance = c;
    return c;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    std::string b;
    int c;
    std::cout << "Введите номер счёта:\n";
    std::cin >> a;
    std::cout << "Введите имя владельца:\n";
    std::cin >> b;
    std::cout << "Введите баланс:\n";
    std::cin >> c;


    Balance num1 = { a,b,c };
    std::cout << num1.id <<  '\t' << num1.name << '\t' << num1.balance << "\n";
    newBalance(c, num1);
    std::cout << "Ваш новый счет:" << num1.id <<'\t' << num1.name << '\t' << num1.balance;
}