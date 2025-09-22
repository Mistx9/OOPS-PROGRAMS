#include <stdio.h>
#include <string.h>

// Function to reverse a string manually
void reverseString(char str[], char rev[]) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
}

int main() {
    char str[100], rev[100];
    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str, rev);

    if (strcmp(str, rev) == 0)
        printf("Palindrome String\n");
    else
        printf("Not a Palindrome\n");

    return 0;
}
