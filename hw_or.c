#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Steps:

    1. Create an array with 30,000 elements.

    2. Fill the created array by generating random numbers between 0-30,000. 
    The array will not be sorted. The element placed in the array will be used once. 
    For example, if the value 5 is placed in the index 10 of the array, the value 5 will not be placed in another index again.

    3. Sort the array from smallest to largest using the algorithms below and calculate the array sorting times of the algorithms.

    4. Sort the array from largest to smallest using the algorithms below and calculate the array sorting times of the algorithms. 
    (Attention: do not do this after step 3. Do it as an independent operation.)

    5. Comment on the differences in calculation times in the operations you performed in steps 3 and 4.

Algorithms to be used:

    a. Selection Sort
    b. Quick Sort
    c. Bubble Sort
    d. Insertion Sort
*/

int alreadyExists(int arr[], int size, int num)
{
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[30000];
    srand(time(0)); // Инициализация рандома

    for (int i = 0; i < 30000; i++) {
        int r = rand() % 30001;
        while (alreadyExists(arr, i, r)) { // Проверяем среди уже вставленных
            r = rand() % 30001;
        }
        arr[i] = r;
    }

    // Принт для проверки (первые 10 чисел)
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}