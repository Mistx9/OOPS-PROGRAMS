#include <stdio.h>

int isPalindrome(int n) {
    int rev = 0, temp = n;
    while (temp != 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    return n == rev;
}

int main() {
    int num, start, end;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is Palindrome\n", num);
    else
        printf("%d is Not Palindrome\n", num);

    printf("Enter range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Palindrome numbers between %d and %d: ", start, end);
    for (int i = start; i <= end; i++) {
        if (isPalindrome(i))
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
