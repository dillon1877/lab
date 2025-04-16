#include <stdio.h>
#include <string.h>

//Write a program in C to print a string in reverse using a pointer

int main() {
    char str[100];
    char *p;

    printf("Enter a word: ");
    scanf("%s", str);  // читаем без пробелов

    p = str + strlen(str) - 1;  // указатель на последний символ

    printf("Reverse state: "); // идём назад по символам и печатаем их по одному
    while (p >= str) {
        printf("%c", *p);
        p--;
    }

    return 0;
}
