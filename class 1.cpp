
#include <iostream>
#include <iostream>

class Calculator {
private:
    double num1;
    double num2;

public:


    double getAdd() {
        double a = 0;
        a = num1 + num2;
        return a;
    }


    double getSubtract_1_2() {
        double a = 0;
        a = num1 - num2;
        return a;
    }

    double getSubtract_2_1() {
        double a = 0;
        a = num2 - num1;
        return a;
    }
    double getMultiply() {
        double a = 0;
        a = num1 * num2;
        return a;
    }

    double getDivide_1_2() {
        double a = 0;
        a = num1 / num2;
        return a;
    }

    double getDivide_2_1() {
        double a = 0;
        a = num2 / num1;
        return a;
    }

    bool setNum1(double num1) {
        if (num1 == 0) {
            return false;
        }
        else {
            this->num1 = num1;
            return true;
        }
    }

    bool setNum2(double num2) {
        if (num2 == 0) {
            return false;
        }
        else {
            this->num2 = num2;

            return true;
        }
    }
};

int main()
{
    
    double a = 0, b = 0;
    Calculator calc;

    for (;;) {

        std::cout << "Enter num1: ";
        std::cin >> a;

        std::cout << "Enter num2: ";
        std::cin >> b;



        if (calc.setNum1(a) == 0 || calc.setNum2(b) == 0) {
            std::cout << "Error!" << std::endl;
        }
        else {
            std::cout << "num1 + num2 = " << calc.getAdd() << std::endl;
            std::cout << "num1 - num2 = " << calc.getSubtract_1_2() << std::endl;
            std::cout << "num2 - num1 = " << calc.getSubtract_2_1() << std::endl;
            std::cout << "num1 * num2 = " << calc.getMultiply() << std::endl;
            std::cout << "num1 / num2 = " << calc.getDivide_1_2() << std::endl;
            std::cout << "num2 / num1 = " << calc.getDivide_2_1() << std::endl;
        }
    }
}