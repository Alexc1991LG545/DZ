﻿// 4.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <string>

class Figure {
protected:
    int sides_count;
    std::string name;
    int a, b, c, d;
    int A, B, C, D;
public:
    Figure() {
        sides_count = 0;
        name = "Фигура";
        a = 0;
        b = 0;
        c = 0;
        d = 0;
        A = 0;
        B = 0;
        C = 0;
        D = 0;
    }
    void print_name() {
        std::cout << name << ":\n";
    }
    virtual bool check_figures() {
        return true;
    }
    virtual void print_sides_coners() {
        if (check_figures()) std::cout << "Правильная\n";
        else  std::cout << "Неправильная\n";
        std::cout << "Количество сторон: " << sides_count << std::endl << std::endl;
    }
    virtual int coners_summ() {
        return 0;
    }
};

class Triangle : public Figure {
public:
    Triangle(int a, int b, int c, int A, int B, int C) {
        sides_count = 3;
        name = "Треугольник";
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    int coners_summ() override {
        return A + B + C;
    }
    bool check_figures() override {
        int summ = coners_summ();
        return (summ == 180) ? true : false;
    }
    void print_sides_coners() override {
        if (check_figures()) std::cout << "Правильная\n";
        else  std::cout << "Неправильная\n";
        std::cout << "Количество сторон: " << sides_count << std::endl <<
            "Стороны: a=" << std::to_string(a) << " b=" + std::to_string(b) << " c=" << std::to_string(c) << "\n" <<
            "Углы: A=" << std::to_string(A) << " B=" << std::to_string(B) << " C=" << std::to_string(C) << "\n\n";
    }
};

class RightTriangle : public Triangle {
public:
    RightTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
        name = "Прямоугольный треугольник";
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    bool check_figures() override {
        int summ = coners_summ();
        return ((C == 90) && (summ == 180)) ? true : false;
    }
};

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
        name = "Равнобедренный треугольник";
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    bool check_figures() override {
        int summ = coners_summ();
        return ((a == c) && (A == C) && (summ == 180)) ? true : false;
    }
};

class EquilaterallesTriangle : public Triangle {
public:
    EquilaterallesTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
        name = "Равносторонний треугольник";
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    bool check_figures() override {
        int summ = coners_summ();
        return ((a == c) && (a == b) && (A == 60) && (B == 60) && (C == 60) && (summ == 180)) ? true : false;
    }
};

class Quadrangle : public Figure {
public:
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
        sides_count = 4;
        name = "Четырёхугольник";
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    int coners_summ() override {
        return A + B + C + D;
    }
    bool check_figures() override {
        int summ = coners_summ();
        return (summ == 360) ? true : false;
    }
    void print_sides_coners() override {
        if (check_figures()) std::cout << "Правильная\n";
        else  std::cout << "Неправильная\n";
        std::cout << "Количество сторон: " << sides_count << std::endl <<
            "Стороны: a=" << std::to_string(a) << " b=" + std::to_string(b) << " c=" << std::to_string(c) << " d=" << std::to_string(d) << "\n" <<
            "Углы: A=" << std::to_string(A) << " B=" << std::to_string(B) << " C=" << std::to_string(C) << " D=" << std::to_string(D) << "\n\n";
    }

};

class Rectangle : public Quadrangle {
public:
    Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D) {
        name = "Прямоугольник";
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    bool check_figures() override {
        int summ = coners_summ();
        return ((a == c) && (b == d) && (A == 90) && (B == 90) && (C == 90) && (D == 90) && (summ == 360)) ? true : false;
    }
};

class Square : public Quadrangle {
public:
    Square(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D) {
        name = "Квадрат";
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    bool check_figures() override {
        int summ = coners_summ();
        return ((a == c) && (a == b) && (a == d) && (A == 90) && (B == 90) && (C == 90) && (D == 90) && (summ == 360)) ? true : false;
    }
};

class Parallelogram : public Quadrangle {
public:
    Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D) {
        name = "Параллелограмм";
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    bool check_figures() override {
        int summ = coners_summ();
        return ((a == c) && (b == d) && (A == C) && (B == D) && (summ == 360)) ? true : false;
    }
};

class Rhomb : public Quadrangle {
public:
    Rhomb(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D) {
        name = "Ромб";
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    bool check_figures() override {
        int summ = coners_summ();
        return ((a == c) && (a == b) && (a == d) && (A == C) && (B == D) && (summ == 360)) ? true : false;
    }
};


void print_info(Figure* figure) {
    figure->print_name();
    figure->print_sides_coners();
}

int main()
{
    setlocale(LC_ALL, "RU");

    Figure f;
    print_info(&f);

    Triangle tr(10, 20, 30, 50, 60, 70);
    print_info(&tr);

    RightTriangle rtr(10, 20, 30, 50, 60, 90);
    print_info(&rtr);

    RightTriangle rtr1(10, 20, 30, 50, 40, 90);
    print_info(&rtr1);

    IsoscelesTriangle itr(10, 20, 10, 50, 60, 50);
    print_info(&itr);

    EquilaterallesTriangle etr(30, 30, 30, 60, 60, 60);
    print_info(&etr);

    Quadrangle qu(10, 20, 30, 40, 50, 60, 70, 80);
    print_info(&qu);

    Rectangle re(10, 20, 10, 20, 90, 90, 90, 90);
    print_info(&re);

    Square sq(20, 20, 20, 20, 90, 90, 90, 90);
    print_info(&sq);

    Parallelogram pa(20, 30, 20, 30, 30, 40, 30, 40);
    print_info(&pa);

    Rhomb rh(30, 30, 30, 30, 30, 40, 30, 40);
    print_info(&rh);
}