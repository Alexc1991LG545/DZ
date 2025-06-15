
#include <iostream>
#include <Windows.h>


int* append_to_dynamic_array(int * arr, int &nom_all, int &b, int nom_last ) {
    int* temp = new int[nom_all*2];
    for (int i = 0; i < b; ++i) {
        temp[i] = arr[i];
    }
    nom_all *= 2;
    temp[b] = nom_last;
    b = b+ 1;

    delete arr;
    return temp;
}

void print_dynamic_array(int* arr, int logical_size, int actual_size) {
    std::cout << "Динамический массив :";
    for (int i = 0; i < actual_size; ++i) {
        std::cout << " " << arr[i];

    }

    for (int i = actual_size; i < logical_size; ++i) {
        std::cout << " _";
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);

    int a = 0, b = 1, c = 0, d = 0, exit = 1, chek=0;
    //a-фактич. разм. массива, b- логический, с- индекс массива, d- новое число, chek- номер захода.

    while (b > a) {
        std::cout << "Введите фактичеcкий размер массива: ";
        std::cin >> a;
        std::cout << "Введите логический размер массива: ";
        std::cin >> b;
    }
    int* mas = new int[a];

    while (c < b) {
        std::cout << "Введите mas" << "[" << c << "]: ";
        std::cin >> mas[c];
        ++c;
    }


    print_dynamic_array(mas, a, b);


 int* arrr = NULL;

    while (exit == 1) {

       
        std::cout << "\nВведите элемент для добавления или 0 для выхода: ";
        std::cin >> d;

        if (d == 0) { //выходим.
            exit = 0;
            break;
        }




        if (b >= a) { //если число не влезает, то увелич. массив
            if (chek == 5) {
                //delete mas ;
                int* mas = new int[a];
                for (int i = 0; i < (a); ++i) {
                    mas[i] = arrr[i];
                }
            }
            arrr = append_to_dynamic_array(mas, a, b, d);
            if (chek == 5) { delete mas; }
            chek = 5;
            
        }


        else {
            
                    //добавляем число в массив
            if (chek == 0) {  // если это 1 проход то в старый массив.
                mas[c] = d;
                ++c;
                ++b;
                arrr = new int[a];
                for (int i = 0; i < a; ++i) {
                    arrr[i] = mas[i];
                }
            }
            else {
                arrr[c+1] = d; //в новый массив
                ++c;
                ++b;



            }

           
        }

        print_dynamic_array(arrr, a, b);


    }
}




//чужое решение
/*
#include <iostream>

int* append_to_dynamic_arra(int* arr, int* logical_size, int* actual_size, int* append)
{
    if (*logical_size < *actual_size)
    {
        *logical_size += 1;
        arr[*logical_size - 1] = *append;
        return arr;
    }
    else {
        int* arr_tmp = new int[*actual_size *= 2];

        for (int i = 0; i < *logical_size; i++)
        {
            arr_tmp[i] = arr[i];
        }

        *logical_size += 1;
        arr_tmp[*logical_size - 1] = *append;
        delete[] arr;
        arr = arr_tmp;
        return arr_tmp;
    }
}

void print_dynamic_array(int* arr, int logical_size, int actual_size)
{

    for (int i = 0; i < actual_size; i++)
    {
        if (i >= logical_size)
        {
            std::cout << "_\t";
        }
        else (std::cout << arr[i] << "\t");
    }
}

int main()
{
    setlocale(LC_ALL, "Rus");
    int actual_size = 0, logical_size = 0;

    std::cout << "Введите фактический размер массива: ";
    std::cin >> actual_size;
    std::cout << "Введите логический размер массива: ";
    std::cin >> logical_size;
    int* arr = new int[actual_size];
    int** ptr = &arr;
    if (logical_size > actual_size)
    {
        std::cout << "Ошибка!Логический размер массива не может превышать фактический!";
    }
    else
    {
        for (int i = 0; i < logical_size; i++)
        {
            std::cout << "Введите arr[" << i << "]: ";
            std::cin >> arr[i];
        }
        std::cout << "Динамический массив:\t";
        print_dynamic_array(arr, logical_size, actual_size);
        int append = 0;
        do
        {
            std::cout << "\n" << "Введите элемент для добавления: ";
            std::cin >> append;
            if (append != 0)
            {
                *ptr = append_to_dynamic_arra(arr, &logical_size, &actual_size, &append);
                std::cout << "Динамический массив:\t";
                print_dynamic_array(*ptr, logical_size, actual_size);
            }
        }

        while (append != 0);
        std::cout << "Спасибо. Ваш массив: ";
        print_dynamic_array(*ptr, logical_size, actual_size);
    }
    delete[] * ptr;
    return 0;
}
*/
