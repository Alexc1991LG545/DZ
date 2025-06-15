#include <iostream>
#include <Windows.h>

void print_dynamic_array(int* arr, int logical_size, int actual_size) {
    std::cout << "Динамический массив :";
    for (int i = 0; i < actual_size; ++i) {
        std::cout << " " << arr[i];

    }

    for (int i = actual_size; i < logical_size; ++i) {
        std::cout << " _" ;


    }


}


int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);

    int a = 0, b = 0, c = 0;

    std::cout << "Введите фактичеcкий размер массива: ";
    std::cin >> a;
    std::cout << "Введите логический размер массива: ";
    std::cin >> b;
    
    if (b > a) {
        std::cout << "Ошибка! Логический размер массива не может превышать фактический!";
     }
    else {
        int* mas = new int[a];

        while (c < b) {
            std::cout << "Введите mas" << "[" << c << "]: ";
            std::cin >> mas[c];
            ++c;
        }

        print_dynamic_array(mas, a, b);
    }
}