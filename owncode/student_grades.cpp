#include <iostream>
using namespace std;

int main() {
    int marks[5], sum = 0;
    float percentage;
    char grade;

    cout << "Enter marks of 5 subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        sum += marks[i];
    }

    percentage = sum / 5.0;

    if (percentage >= 90) grade = 'A';
    else if (percentage >= 75) grade = 'B';
    else if (percentage >= 50) grade = 'C';
    else grade = 'F';

    cout << "Percentage: " << percentage << "%\n";
    cout << "Grade: " << grade << endl;

    return 0;
}
