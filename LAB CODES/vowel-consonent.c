#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch); // Added a space before %c to consume any leftover newline character

    // Check if the character is a vowel (uppercase or lowercase)
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel letter.\n", ch);
    } else {
        // Check if the character is an alphabet (to distinguish from symbols/numbers)
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            printf("%c is a consonant letter.\n", ch);
        } else {
            printf("%c is not an alphabet.\n", ch);
        }
    }

    return 0;
}