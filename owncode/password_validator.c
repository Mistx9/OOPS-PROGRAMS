#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[50];
    int hasDigit = 0;

    printf("Enter password: ");
    scanf("%s", password);

    for (int i = 0; i < strlen(password); i++) {
        if (isdigit(password[i])) {
            hasDigit = 1;
            break;
        }
    }

    if (strlen(password) >= 8 && hasDigit)
        printf("Password is valid \n");
    else
        printf("Invalid password  (must be 8+ chars and contain a digit)\n");

    return 0;
}

