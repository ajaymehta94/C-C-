/*
 * Project 1: Student Report Card Generator
 * Topics used: variables, multiple variables, naming, format specifiers, 
 *              precision, char, int, float, sizeof
 */

#include <stdio.h>

int main() {
    // Student data - good naming style
    int studentID = 101;
    char studentGrade = 'A';
    char studentName[] = "Rahul Sharmaji";
    
    // Marks in 3 subjects - multiple variables
    int mathMarks = 85, scienceMarks = 92, englishMarks = 78;
    
    // Calculations
    int totalMarks = mathMarks + scienceMarks + englishMarks;
    float percentage = totalMarks / 3.0; // .0 lagana zaroori hai float ke liye
    
    // Scientific notation for large school ID
    long long int schoolAffiliationNo = 12E5; // 1200000
    
    printf("===== STUDENT REPORT CARD =====\n");
    printf("Student ID: %d\n", studentID);
    printf("Name: %s\n", studentName);
    printf("School Affiliation No: %lld\n", schoolAffiliationNo);
    printf("--------------------------------\n");
    printf("Math:     %3d / 100\n", mathMarks);
    printf("Science:  %3d / 100\n", scienceMarks);
    printf("English:  %3d / 100\n", englishMarks);
    printf("--------------------------------\n");
    printf("Total:    %3d / 300\n", totalMarks);
    printf("Percentage: %.2f %%\n", percentage); // %% for % sign
    printf("Final Grade: %c\n", studentGrade);
    printf("================================\n");
    
    // Bonus: Size info
    printf("\nSize of studentID: %zu bytes\n", sizeof(studentID));
    printf("Size of percentage: %zu bytes\n", sizeof(percentage));

    return 0;
}
