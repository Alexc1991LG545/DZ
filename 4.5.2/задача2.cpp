#include <iostream>
#include <Windows.h>
#include <string>

void print_pyramid(int* mas, int size) {
    
    std::cout << 0 << " root " << mas[0];
    

    for (int i = 0; i < size; ++i) {
        if ((2 * i + 1) < size) {
            int ii = 0;
            int sum = 0, z = 1;
            while (sum < i ) {
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
            int ii = 0;
            int sum = 0, z = 1;
            while (sum < i ) {
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
    //int mas[6] = { 1, 3, 6, 5, 9, 8 };
    //int mas[8] = { 94, 67, 18, 44, 55, 12, 6, 42 };
    int mas[10] = { 16, 11, 9, 10, 5, 6, 8, 1, 2, 4 };
       
    std::string a;
    int size = (sizeof(mas) / sizeof(mas[0]));
    print_pyramid(mas, size);
    int b = 0, c = 0, d=0, e=0; 
    // b- выход из цикла, c- i в массиве, d- предок в пирамиде.

    std::cout << "\nВы находитесь здесь: 0" << " root " << mas[c];

while (b == 0) {
    std::cout << "\nВведите команду: ";
    std::cin >> a;
    

    


        if (a.compare("up") == 0) {
            if (c == 0) {
                std::cout << "\nвы вверху пирамиды.";
                continue;
            }
            
            c = ((c - 1) / 2); // поднялись вверх. мы тут.
            d = ((c - 1) / 2);
            int ee = 0;
            int sum = 0, z = 1;
            while (sum < c) {
                z = z * 2;
                sum += z;
                ++ee;
            } // а это наш i в пирамиде.
            e = c % 2; // выдаст остаток

            if (c == 0) {
                std::cout << "\n OK.\nВы находитесь здесь: 0" << " root " << mas[c];
            }
            else if (e == 1) {
                std::cout << "\n OK.\nВы находитесь здесь: " << ee << " left(" << mas[d] <<")" << mas[c];
            }
            else if (e == 0) {
                std::cout << "\n OK.\nВы находитесь здесь: " << ee << " right(" << mas[d] << ")" << mas[c];
            }
        }


        else if (a.compare("left") == 0) {
            

            if ((c * 2 + 1) >= size) {
                std::cout << "\nОшибка! Отсутствует левый потомок";
            }
            else {
                c = c * 2 + 1;
                d = ((c - 1) / 2);
                e = 0;
                int sum = 0, z=1;
                while ( sum<= c) {
                    z = z * 2;
                    sum += z;
                    ++e;
                }
                std::cout << "\nок.\nВы находитесь здесь: " << e << " left(" << mas[d] << ")" << mas[c];

            }
        }


        else if (a.compare("right") == 0) {
            
            if ((c * 2 + 2) >= size) {
                std::cout << "\nОшибка! Отсутствует правый потомок";
            }
            else {
                c = c * 2 + 2;
                d = ((c - 1) / 2);
                e = 0;
                int sum = 0, z = 1;
                while (sum <= c-1) {
                    z = z * 2;
                    sum += z;
                    ++e;
                }
                std::cout << "\nok.\nВы находитесь здесь: " << e << " right(" << mas[d] << ")" << mas[c];

            }


        }


        else if (a.compare("exit") == 0) {
            b = 5;
            std::cout << "\nok, досвидание.";
        }


        else {
            std::cout << "\nкоманда не определена, введите up, left, right, exit";
        }
    }

   


}
