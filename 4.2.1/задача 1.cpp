
#include <iostream>
#include <Windows.h>


int sum(int a) {
    if (a<1) {
        return 0;
    }
    if (a == 1) {
        return 1;
    }

    
       return sum(a - 1) + sum(a-2);
    
    
}



int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);

    int a = 0, b=0;
    std::cout << "Введите колличество рекурсий. ";
    std::cin >> a;

     b = sum(a);
        std::cout << "\nсумма чисел фибоначи " << b;

}


// памать О(1) т.к. мы не задействуем дополнительную память.
// скорость О(n^2) т.к. приходится дважды проходить по рекурсии и доставать числа.