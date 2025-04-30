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

int main()
{
    int arr[30000];                             // We create an array with 30,000 elements 
    srand(time(0));                             // Initialize random number generator with current time to get different random sequences each run
    
    for (int i = 0; i < 30000; i++) {
        arr[i] = i;
    }

    for (int i = 0; i < 30000; i++) {           // Fisher–Yates shuffle         
        int j = rand() % (i + 1);               // Random index between 0 and i
        int tmp = arr[i]; 
            arr[i] = arr[j]; 
            arr[j] = tmp;
    }

    for (int i = 0; i < 20; i++) {              // Print first 20 elements for testing
        printf("%d ", arr[i]);
    }

    return 0;
}