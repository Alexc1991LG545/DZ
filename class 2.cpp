// class 2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <cstring>
#include <Windows.h>

class Counter {
private:
    int x;

public:

    Counter(int x) {
        this->x = x;
    }

    Counter() {
        x = 1;
    }

    void set_x_on1() {
        x++;
    }

    void set_x_off1() {
        --x;
    }

    int get_x_cout() {
        std::cout << x << "\n";
        return x;
    }

};



int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    int a = 0;
    std::string c, b;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет:\n";
    std::cin >> b;

    if (b == "да") {
        std::cout << "Введите начальное значение счётчика:\n";
        std::cin >> a;
    }

    Counter* z;

    (b == "да") ? (z = new Counter(a)) : (z = new Counter());

    for (;;) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> c;

        if (c == "+") {
            z->set_x_on1();
        }
        if (c == "-") {
            z->set_x_off1();
        }
        if (c == "=") {
            z->get_x_cout();
        }
        if (c == "x") {
            std::cout << "До свидания!";
            break;
        }
    }
    delete z;
}