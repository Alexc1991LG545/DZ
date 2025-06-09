#include <iostream>

int null(int* arr_f, int x, int c) {
    int left = 0, midl = 0, right = c, i = 5;

    int l = arr_f[0], r = arr_f[right], y;

    if (x < arr_f[0]) {
        return c + 1;
    }

    if (x >= arr_f[c]) {
        return 0;
    }



    while (i > 0) {
        midl = left + ((right - left) / 2);

        if (x >= arr_f[left] && x < arr_f[left + 1])
        {
            y = (c - left);
            return y;
        }

        if (x >= arr_f[midl]) {
            left = midl;
        }
        if (x < arr_f[midl]) {
            right = midl;
        }


    }





};







int main() {
    int arr[] = { 14, 16, 19, 32, 32, 32, 56, 69, 72 };
    int a = 0, b = 0, c = 0;
    c = ((sizeof(arr)) / (sizeof(arr[0])) - 1);
    std::cout << "Введите точку отсчёта:";
    std::cin >> a;
    b = null(arr, a, c);
    std::cout << "Количество элементов в массиве больших, чем " << a << ": " << b << std::endl;

}

