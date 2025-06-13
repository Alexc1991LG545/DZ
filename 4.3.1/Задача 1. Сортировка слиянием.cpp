#include <iostream>
#include <Windows.h>



void merge_sort(int* arr, int size) {

    int a = size / 2;
    for (int i = 0; i < (a-1); ++i) {
        for (int j = 0; j < (a-1); ++j) {
            if (arr[j] > arr[j + 1]) {
                int ptr = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = ptr;
            }

        }

    }
    


    for (int i = a; i < size - 1; ++i) {
        for (int j = a; j < (size -1); ++j) {
            if (arr[j] > arr[j + 1]) {
                int ptr = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = ptr;
            }

        }

    }

    int sA = 0, sB = a, sC = 0;
    int* mas4 = new int[size];

    while (sA < a && sB < size) {
        if (arr[sA] <= arr[sB]) {
            mas4[sC] = arr[sA];
            ++sA;
            ++sC;
        }

        else {
            mas4[sC] = arr[sB];
            ++sB;
            ++sC;
        }


    }

    if (sA == a) {
         do {
            mas4[sC] = arr[sB];
            ++sB;
            ++sC;


         } while (sB < size);


    }

    else {
        while(sA< a) {
            mas4[sC] = arr[sA];
            ++sA;
            ++sC;
        }

       
    }
    
    for (int i = 0; i < size ; ++i) {


            std::cout << mas4[i] << " ";


        }
    delete []mas4;
}






int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);

   int mas1[10] = { 3, 43, 38, 29, 18, 72, 57, 61, 2, 33 };
   int mas2[15] = { 88, 91, 87, 59, 53, 49, 29, 16, 4, 27, 28, 89, 2, 25, 74 };
   int mas3[18] = { 24, 66, 20, 79, 30, 16, 19, 62, 94, 59, 0, 7, 59, 90, 84, 60, 95, 62 };

    merge_sort(mas1, 10);

    std::cout << "\n\n";

    merge_sort(mas2, 15);

    std::cout << "\n\n ";

    merge_sort(mas3, 18);

    std::cout << "\n\n";

}

