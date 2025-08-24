//Write a function to check whether a given string is a palindrome using pointer traversal.
#include <stdio.h>
#include <string.h> 
int isPalindrome(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1;

    while (start < end) {
        if (*start != *end) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Is a palindrome
}   
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}   