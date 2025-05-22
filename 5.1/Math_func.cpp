#include <iostream>
#include "Math_func.h"

enum math_op {
    addition = 1,
    subtraction,
    multiplication,
    division,
    exponentiation
};

int main()
{
    setlocale(LC_ALL, "RU");

    std::cout << "������� ������ �����: ";
    double num1;
    std::cin >> num1;
    std::cout << "������� ������ �����: ";
    double num2;
    std::cin >> num2;
    std::cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
    int operation;
    std::cin >> operation;

    switch (operation) {
    case static_cast<int>(math_op::addition):
        std::cout << "����� " << num1 << " � " << num2 << " = " << summ(num1, num2) << std::endl;
        break;
    case static_cast<int>(math_op::subtraction):
        std::cout << "�������� " << num1 << " � " << num2 << " = " << subtract(num1, num2) << std::endl;
        break;
    case static_cast<int>(math_op::multiplication):
        std::cout << "������������ " << num1 << " � " << num2 << " = " << multiply(num1, num2) << std::endl;
        break;
    case static_cast<int>(math_op::division):
        std::cout << num1 << " �������� �� " << num2 << " = " << divide(num1, num2) << std::endl;
        break;
    case static_cast<int>(math_op::exponentiation):
        std::cout << num1 << " � ������� " << num2 << " = " << exponent(num1, num2) << std::endl;
        break;
    default:
        std::cout << "����������� ��������!" << std::endl;
    }
}