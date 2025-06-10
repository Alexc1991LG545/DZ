// задача 2.

#include <iostream>
#include <Windows.h>





/*int fib(int n) {
    int arr[n-1]{ 0,1 };
    for (int i = 2; i <= n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n];
}
*/










int sum(int a ) {
    int* arr = new int[a];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i <= a; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[a];

    delete[] arr;
}



int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);

    int a = 0, b = 0;

    std::cout << "Введите колличество рекурсий. ";
    std::cin >> a;
    b = sum(a);
    std::cout << "\nсумма чисел фибоначи " << b;

}


// памать О(n) т.к. мы задействуем дополнительную память.
// скорость О(n) т.к. приходится проходить по рекурсии и доставать числа, но благодаря матрице это значительно быстрее.