#include <stdio.h>

int main() {
    int marks[5], total = 0;
    float avg, percent;
    char grade;

    printf("Enter marks of 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    avg = total / 5.0;
    percent = (total / 500.0) * 100;

    if (percent >= 90)
        grade = 'A';
    else if (percent >= 75)
        grade = 'B';
    else if (percent >= 50)
        grade = 'C';
    else
        grade = 'F';

    printf("Total = %d\nAverage = %.2f\nPercentage = %.2f%%\nGrade = %c\n", total, avg, percent, grade);

    return 0;
}
