#include <stdio.h>

int main() {
    char name[100];
    int roll;
    float marks[5], total = 0, percentage;
    char grade;
    int i;
    printf("Enter student name: ");
    scanf("%s", name);
    printf("Enter roll number: ");
    scanf("%d", &roll);
    printf("Enter marks of 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    percentage = total / 5;
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 55)
        grade = 'C';
    else if (percentage >= 35)
        grade = 'D';
    else
        grade = 'F';
    printf("\n Marksheet \n");
    printf("Name: %s\n", name);
    printf("Roll No: %d\n", roll);
    printf("Total Marks: %f\n", total);
    printf("Percentage: %f\n", percentage);
    printf("Grade: %c\n", grade);
    return 0;
}