/*
 * 1. Calculate Area of a Rectangle
 * // Create Variable
 * int length = 5;
 * int width = 6;
 * int area;
 *
 * // Calculate the area
 * area = length * width;
 *
 * // Print the result
 * printf("Length is: %d\n", length);
 * printf("Width is: %d\n", width);
 * printf("Area of the ractangle is: %d", area);
 *
 * 2. Scientific Numbers
 * This is done using the letter e (or E)
 * For Example, 35e3 means 35 x 10^3 = 35000
 *
 * float f1 = 35e3; // 35 * 10^3 = 35000
 * double d1 = 12E4; // 12 * 10^4 = 120000
 *
 * printf("%f\n", f1);
 * printf("%lf", d1);
 *
 * 3. Set Decimal Precision
 * Example =>
 * float myFloatNum = 3.5;
 * double myDoubleNum = 19.99;
 *
 * printf("%f\n", myFloatNum); // output 3.500000
 * printf("%lf", myDoubleNum); // output 19.990000
 *
 * If you want to remove the extra zeros set decimal Precision, you can use dot (.)
 * 1. %f - Default 6 Digits after decimal point
 * 2. %.1f - only show 1 digit
 * 3. %.2f - only show 2 digit
 * 4. %.4f - only show 4 digit
 *
 * 4. The sizeof Operator
 * Data Type    Size
 * int          2 or 4 bytes
 * float        4 bytes
 * double       8 bytes
 * char         1 byte
 *
 * To actually get the size (in bytes) of a data type or variable, use the sizeof operator
 *
 * int myInt;
 * float myFloat;
 * double mydouble;
 * char mychar;
 *
 * printf("%zu\n", sizeof(myInt));
 * printf("%zu\n", sizeof(mydouble));
 * printf("%zu\n", sizeof(myFloat));
 * printf("%zu\n", sizeof(mychar));
 *
 * Note => %zu format specifier to print the result, instead of %d.
 * This because the Compiler expect the sizeof operator to return a Value of type size_t.
 */

#include <stdio.h>

int main() {
    // 1. Calculate Area of a Rectangle
    int length = 5;
    int width = 6;
    int area;
    
    // Calculate the area
    area = length * width;
    
    // Print the result
    printf("--- Rectangle Area ---\n");
    printf("Length is: %d\n", length);
    printf("Width is: %d\n", width);
    printf("Area of the rectangle is: %d\n\n", area);

    // 2. Scientific Numbers
    float f1 = 35e3;   // 35 * 10^3 = 35000
    double d1 = 12E4;  // 12 * 10^4 = 120000
    
    printf("--- Scientific Numbers ---\n");
    printf("35e3 = %f\n", f1);
    printf("12E4 = %lf\n\n", d1);

    // 3. Set Decimal Precision
    float myFloatNum = 3.5;
    double myDoubleNum = 19.99;
    
    printf("--- Decimal Precision ---\n");
    printf("Default %%f: %f\n", myFloatNum);
    printf("Default %%lf: %lf\n", myDoubleNum);
    printf("Only 1 digit: %.1f\n", myFloatNum);
    printf("Only 2 digit: %.2f\n", myDoubleNum);
    printf("Only 4 digit: %.4f\n\n", myDoubleNum);

    // 4. The sizeof Operator
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;
    
    printf("--- sizeof Operator ---\n");
    printf("Size of int: %zu bytes\n", sizeof(myInt));
    printf("Size of float: %zu bytes\n", sizeof(myFloat));
    printf("Size of double: %zu bytes\n", sizeof(myDouble));
    printf("Size of char: %zu byte\n", sizeof(myChar));
    printf("Size of long: %zu bytes\n", sizeof(long));

    return 0;
}
