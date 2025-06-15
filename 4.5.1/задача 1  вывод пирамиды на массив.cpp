#include <iostream>
#include <Windows.h>

void print_pyramid(int* mas, int size) {
    int ii = 0;
    std::cout << ii << " root " << mas[0];
    

    int sum = 0, z = 1;
  


    for (int i = 0; i < size; ++i) {
        if ((2 * i + 1) < size) {

            
            while (sum <= i) {
                z = z * 2;
                sum += z;
                ++ii;
            }

            std::cout << "\n" << ii << " left (" << mas[i] << ")" << mas[(2 * i + 1)];
        }
        else {
            break;
        }

        if ((2 * i + 2) < size) {

            while (sum <= i) {
                z = z * 2;
                sum += z;
                ++ii;
            }

            std::cout << "\n" << ii << " right (" << mas[i] << ")" << mas[(2 * i + 2)];
        }
        else {
            break;
        }
        
    }

}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);


    std::cout << "Hello World!\n";
    int size1 = 6, size2 = 8, size3 = 10;
    int mas1[6] = { 1, 3, 6, 5, 9, 8 };
    int mas2[8] = { 94, 67, 18, 44, 55, 12, 6, 42 };
    int mas3[10] = { 16, 11, 9, 10, 5, 6, 8, 1, 2, 4 };


    print_pyramid(mas1, size1);
    std::cout << "\n\n\n";
    print_pyramid(mas2, size2);
    std::cout << "\n\n\n";
    print_pyramid(mas3, size3);

}


