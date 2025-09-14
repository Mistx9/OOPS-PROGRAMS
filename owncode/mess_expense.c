// mess_expense.c
#include <stdio.h>

int main() {
    int students, days;
    float costPerMeal;
    printf("Enter number of students: ");
    scanf("%d", &students);
    printf("Enter number of days: ");
    scanf("%d", &days);
    printf("Enter cost per meal: ");
    scanf("%f", &costPerMeal);

    int meals[students];
    for (int i = 0; i < students; i++) {
        printf("Enter number of meals taken by student %d: ", i + 1);
        scanf("%d", &meals[i]);
    }

    printf("\n--- Mess Expense ---\n");
    for (int i = 0; i < students; i++) {
        printf("Student %d bill: Rs. %.2f\n", i + 1, meals[i] * costPerMeal);
    }
    return 0;
}
