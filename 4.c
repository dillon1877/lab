#include <stdio.h>
#include <stdlib.h>

// First, define an array and ask the user for array size.
// Then, get the elements of array from user, too. 
// After that, allocate new space in the array and get new elements. 
// Finally, dump the resulting array to scree. (Use dynamic memory allocation.)


int main() {
    int n, m, i;
    int *arr;

    printf("Length of the array: ");
    while (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid number: ");
        while (getchar() != '\n'); // Cleans the input
    }
    
    arr = (int *)malloc(n * sizeof(int));                       // First we create an array

    printf("Enter the elements of the array: ");            
    for (i = 0; i < n; i++) {
        printf("%d. element: ", i + 1);
        while (scanf("%d", &arr[i]) != 1) {
            printf("Enter ONLY the number! %d. element: ", i + 1);
            while (getchar() != '\n');
        }
    }

    printf("How many new elements would you like to add? ");    // Then we ask how many more elements need to be added.
    while (scanf("%d", &m) != 1 || m <= 0) {
        printf("Please enter a valid number: ");
        while (getchar() != '\n');
    }

    arr = (int *)realloc(arr, (n + m) * sizeof(int));           // realloc - increases the memory for the array

    printf("Enter new elements: \n");
    for (i = n; i < n + m; i++) {
        printf("%d. eleman: ", i + 1);
        while (scanf("%d", &arr[i]) != 1) {
            printf("Enter ONLY the number! %d. element: ", i + 1);
            while (getchar() != '\n');
        }
    }
                                                                // The user adds new elements and the program outputs everything
    printf("The Array: ");
    for (i = 0; i < n + m; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}