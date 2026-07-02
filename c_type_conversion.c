#include <stdio.h>

int main() {
    /*
     * C TYPE CONVERSION
     * =================
     * Type conversion means changing a value from one data type to another data type.
     *
     * There are two types of type conversion in C:
     *
     * 1. IMPLICIT CONVERSION (Automatic)
     *    The compiler automatically converts a smaller data type to a larger data type.
     *    There is no data loss in this process. It is also called Type Promotion or Widening.
     *    The order of promotion is: char -> int -> long -> float -> double
     *
     * 2. EXPLICIT CONVERSION (Manual)
     *    The programmer manually converts a data type using the (type) operator.
     *    This is also called Type Casting or Narrowing.
     *    Data loss can happen if a larger type is converted to a smaller type.
     */

    // 1. EXAMPLE OF IMPLICIT CONVERSION
    /* 
     * Here, the integer value is automatically converted to a float.
     * This happens because a float is a larger data type than an int.
     */
    int myInt = 9;
    float myFloat = myInt;  // Automatic conversion from int to float

    printf("Implicit Conversion Example:\n");
    printf("Integer value: %d\n", myInt);
    printf("Float value: %f\n\n", myFloat); // Output will be 9.000000

    // 2. EXAMPLE OF EXPLICIT CONVERSION
    /*
     * Here, we are manually converting a float to an int.
     * The decimal part .324 will be lost because an int cannot store decimals.
     */
    float f1 = 9.324;
    int num1 = (int) f1;  // Manual casting from float to int

    printf("Explicit Conversion Example:\n");
    printf("Float value: %f\n", f1);
    printf("Integer value: %d\n\n", num1); // Output will be 9

    // 3. WHY TYPE CASTING IS IMPORTANT IN DIVISION
    /*
     * If you divide two integers, the result will also be an integer.
     * So, 5 / 2 will give 2, not 2.5.
     * To get the correct decimal answer, you must cast one value to float.
     */
    int x = 5;
    int y = 2;
    int result1 = x / y;           // Result is 2 because int / int = int
    float result2 = (float) x / y; // Result is 2.5 because float / int = float

    printf("Division Example:\n");
    printf("5 / 2 without casting = %d\n", result1);
    printf("5 / 2 with casting = %f\n", result2);

    /*
     * SUMMARY:
     * 1. Implicit: Small to Large data type. Safe and done automatically.
     * 2. Explicit: Large to Small data type. Possible data loss. Done manually.
     * 3. For decimal results in division, use (float) or (double) for casting.
     */

    return 0;
}
