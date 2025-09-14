// attendance_manager.c
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int presentDays;
    int totalDays;
};

int main() {
    int n, days;
    printf("Enter number of students: ");
    scanf("%d", &n);
    printf("Enter total working days: ");
    scanf("%d", &days);

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter present days for %s: ", s[i].name);
        scanf("%d", &s[i].presentDays);
        s[i].totalDays = days;
    }

    printf("\n--- Attendance Report ---\n");
    for (int i = 0; i < n; i++) {
        float percent = (s[i].presentDays * 100.0) / s[i].totalDays;
        printf("%s -> %d/%d (%.2f%%)\n", s[i].name, s[i].presentDays, s[i].totalDays, percent);
    }
    return 0;
}
