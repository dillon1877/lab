#include <stdio.h>
#include <stdlib.h>

//Write a program in C to find largest element using dynamic memory allocation. Ask the user for the size of the index and get the elements of the array from the user.

int main() 
{
    int n, i, max;
    int *arr;
    
    printf("Write a size of the index: ");      // We ask the user for the array size
    while (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid number: ");
        while (getchar() != '\n'); // Cleans the input
    }
    
    arr = (int *)malloc(n * sizeof(int));       // Allocate memory for the array (malloc)
    if (arr == NULL) {
        printf("Failed to allocate memory!");
        return 1;
    }

    printf("Write an element: ");               // Fill the array from the keyboard
    for (i = 0; i < n; i++) {
        printf("%d. element: ", i + 1);
        while (scanf("%d", &arr[i]) != 1) {
            printf("Enter ONLY the number! %d. element: ", i + 1);
            while (getchar() != '\n');
        }
    }

    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    printf("The Largest element: %d", max);   // Find the maximum element

    return 0;
}