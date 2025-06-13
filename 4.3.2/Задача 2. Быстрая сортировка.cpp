#include <iostream>
#include <Windows.h>


void quick_sort(int* arr, int size) {
    int left = 0, right = size - 1;
    int pivot = arr[right -5];
  //  std::cout << "\n\n" << arr[right -5]<<"\n";


   do{
        while (arr[left] < pivot) {
            left += 1;
        }

        while (arr[right] > pivot) {
            right -= 1;
        }
        if (left <= right) {
            int z = arr[left];
            arr[left] = arr[right];
            arr[right] = z;
            left += 1;
            right -= 1;

        }

        
   } while (left <= right);

   pivot = right;
    


   for (int i = 0; i < (right); ++i) {
       for (int j = 0; j < (right); ++j) {
           if (arr[j] > arr[j + 1]) {
               int ptr = arr[j];
               arr[j] = arr[j + 1];
               arr[j + 1] = ptr;
           }

       }

   }

   for (int i = right+1; i < size - 1; ++i) {
       for (int j = right+1; j < (size - 1); ++j) {
           if (arr[j] > arr[j + 1]) {
               int ptr = arr[j];
               arr[j] = arr[j + 1];
               arr[j + 1] = ptr;
           }

       }

   }





   for (int i = 0; i <= size-1; ++i) {
       std::cout << arr[i] << " ";
   }

}





int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);


    int mas1[10] = { 3, 43, 38, 29, 18, 72, 57, 61, 2, 33 };
    int mas2[15] = { 88, 91, 87, 59, 53, 49, 29, 16, 4, 27, 28, 89, 2, 25, 74 };
    int mas3[18] = { 24, 66, 20, 79, 30, 16, 19, 62, 94, 59, 0, 7, 59, 90, 84, 60, 95, 62 };

    quick_sort(mas1, 10);

    std::cout << "\n\n";

    quick_sort(mas2, 15);

    std::cout << "\n\n ";

    quick_sort(mas3, 18);

    std::cout << "\n\n";

}

