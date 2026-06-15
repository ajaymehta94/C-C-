/*
 * Valid and Invalid Names
 * - Valid -> age, _count, totalSum
 * - Invalid -> 1age (start with a number),
 *              my-age (Contains -), int (reserved word)
 *
 * Naming Style - Many C programs use camelCase
 * like totalScore or underscore like total_score.
 * Choose one style and use it Consistently.
 *
 * Real Life Example -
 * Example -
 * // Student data
 * int StudentID = 15;
 * int StudentAge = 23;
 * float StudentFee = 75.25;
 * char StudentGrade = 'B';
 *
 * // Print variables
 * printf("Student ID: %d\n", studentID);
 * printf("Student Age: %d\n", studentAge);
 * printf("StudentFee: %f\n", studentFee);
 * printf("Student Grade: %c\n", studentGrade);
 */

#include <stdio.h>

int main() {
    // Valid Names
    int age = 21;
    int _count = 100;
    int totalSum = 500;
    
    printf("Valid Names: age=%d, _count=%d, totalSum=%d \n", age, _count, totalSum);

    // Invalid Names - Ye compile nahi honge isliye comment me hain
    // int 1age = 25;     // Error: start with number
    // int my-age = 30;   // Error: - not allowed
    // int int = 50;      // Error: reserved word

    // Real Life Example - Student data
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';

    // Print variables
    printf("\n--- Student Data ---\n");
    printf("Student ID: %d\n", studentID);
    printf("Student Age: %d\n", studentAge);
    printf("Student Fee: %.2f\n", studentFee);
    printf("Student Grade: %c\n", studentGrade);

    return 0;
}
