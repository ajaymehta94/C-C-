#include <stdio.h>

// 1. DEFINE A CONSTANT USING #define PREPROCESSOR
/* 
 * #define is a preprocessor directive.
 * It creates a constant that is replaced with its value before compilation.
 * It does not use memory and does not have a data type.
 * Syntax: #define NAME value
 * Constant names are usually written in UPPERCASE.
 */
#define PI 3.14159
#define DAYS_IN_WEEK 7

int main() {
    /*
     * C CONSTANTS
     * ===========
     * A constant is a value that cannot be changed during program execution.
     * It is also called a literal.
     *
     * There are two ways to create constants in C:
     * 1. Using the #define preprocessor directive
     * 2. Using the const keyword
     */

    // 2. DEFINE A CONSTANT USING THE const KEYWORD
    /*
     * The const keyword declares a variable as "read-only".
     * This means its value cannot be changed after initialization.
     * A const variable has a data type and uses memory.
     * It is better to use const for type safety.
     */
    const int BIRTH_YEAR = 2000;
    const float GRAVITY = 9.8;
    const char GRADE = 'A';

    // Print constants defined with #define
    printf("Constants using #define:\n");
    printf("Value of PI: %f\n", PI);
    printf("Days in a week: %d\n\n", DAYS_IN_WEEK);

    // Print constants defined with const keyword
    printf("Constants using const keyword:\n");
    printf("Birth Year: %d\n", BIRTH_YEAR);
    printf("Gravity: %f\n", GRAVITY);
    printf("Grade: %c\n\n", GRADE);

    // 3. TRYING TO CHANGE A CONSTANT WILL CAUSE AN ERROR
    /*
     * The lines below are commented out because they will not compile.
     * You cannot change the value of a constant after it is defined.
     */
    // BIRTH_YEAR = 2001;  // Error: assignment of read-only variable
    // PI = 3.14;          // Error: lvalue required as left operand

    // 4. PRACTICAL EXAMPLE: CALCULATE AREA OF A CIRCLE
    /*
     * Constants are very useful for values that never change,
     * like PI, tax rates, or fixed limits.
     */
    float radius = 5.0;
    float area = PI * radius * radius; // Using the PI constant

    printf("Practical Example:\n");
    printf("Radius of circle: %.1f\n", radius);
    printf("Area of circle: %f\n", area);

    /*
     * SUMMARY:
     * 1. #define: No data type, handled by preprocessor, no memory address.
     * 2. const: Has a data type, handled by compiler, has a memory address.
     * 3. Use const for type safety. Use #define for simple text replacement.
     * 4. Constant values cannot be changed after they are defined.
     */

    return 0;
}
