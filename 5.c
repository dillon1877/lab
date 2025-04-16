#include <stdio.h>
#include <stdlib.h>


// Write a program using dynamic memory allocation that prints out words of a sentence in reverse order. 
// Example: 
// Input: I love Programming Languages course 
// Output: course Languages Programming love

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[200];
    char *word;
    char **words;
    int count = 0, i;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);                                     // Reading a string fgets

    str[strcspn(str, "\n")] = '\0'; // убираем \n в конце

    words = (char **)malloc(50 * sizeof(char *)); // максимум 50 слов

    word = strtok(str, " ");                                            // strtok splits a sentence into words
    while (word != NULL) {
        words[count] = word;                                            // Store word pointers in an array
        count++;
        word = strtok(NULL, " ");
    }

    printf("The sentence in reverse order:\n");                         // Then we output it reversed
    for (i = count - 1; i >= 0; i--) {
        printf("%s ", words[i]);
    }
    printf("\n");

    return 0;
}
