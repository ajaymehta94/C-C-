/*
 * C Format Specifiers
 *
 * In many other Programming languages like Py, Java and C++ You would
 * normally use a Print fn to display the value of a variable. 
 * However, this is not Possible in C.
 * Ex=>
 * int myNum = 15;
 * printf(myNum); // This will Cause an error
 * Output - error
 *
 * So, to print Variables in C, You must use Something Called "Format Specifiers"
 *
 * Format specifiers are used together with the printf() fn to Print variable.
 * You Can think of Format Specifiers as a placeholder that tells C what kind 
 * of value will be printed.
 * A format specifiers always starts with a Percentage sign %, followed by letter.
 * For example, to output the value of an int variable, use the format specifier %d
 * Surrounded by double quotes (" "), inside
 * Example
 * int myNum = 15;
 * printf("%d", myNum); //output 15
 *
 * Specifier  Type          Output/use           Example
 * %d / %i    int           25                   printf("%d",25)
 * %u         unsigned int  300                  printf("%u",300)
 * %ld        long int      100000               printf("%ld",100000L)
 * %lld       long long int 9+9 time             printf("%lld",999999999LL)
 * %f         float/double  3.140000             printf("%f",3.14)
 * %.2f       float with 2 decimal 3.14          printf("%.2f",3.1415)
 * %lf        double: scanf ke liye (double input) scanf("%lf",&d)
 * %e / %E    Scientific notation (1.234500e+03) printf("%e",1234.5)
 * %g / %G    Shorter of %f or %e (1.23e-05)     printf("%g",0.0000123)
 * %c         char          A                    printf("%c",'A')
 * %s         string        Jio                  printf("%s","Jio")
 * %p         Pointer address (0x7ff56f80ac)     printf("%p",ptr)
 * %x / %X    hex unsigned int (ff/FF)           printf("%x",255)
 * %o         octal unsigned int (10)            printf("%o",8)
 * %%         % Print ke liye (100%)             printf("100%%")
 * %n         Ab tak kitne char Print hue (count=2) printf("Hi%n",&count)
 *
 * Modifiers - 
 * 1. width: %5d => 5 space me right align 'n' 25
 * 2. left align: %-5d => left align 'n' 25
 * 3. Zero padding: %05d 'n' 00025
 * 4. Precision: %.3f 'n' 3.142
 * 5. length: %hd = short, %ld = long, %lld = long long
 * - %[^\n] Space wali String Padhne ke liye
 */

#include <stdio.h>

int main() {
    // Basic Example - Wrong vs Right
    int myNum = 15;
    // printf(myNum); // Ye error dega
    printf("Correct way: %d \n", myNum); // Output: 15

    // All Format Specifiers Examples
    int a = 25;
    unsigned int b = 300;
    long int c = 100000L;
    long long int d = 999999999LL;
    float e = 3.1415;
    double f = 3.1415;
    char g = 'A';
    char str[] = "Jio";
    int *ptr = &a;
    int count = 0;

    printf("\n--- Format Specifiers ---\n");
    printf("%%d / %%i : %d \n", a);
    printf("%%u      : %u \n", b);
    printf("%%ld     : %ld \n", c);
    printf("%%lld    : %lld \n", d);
    printf("%%f      : %f \n", e);
    printf("%%.2f    : %.2f \n", e);
    printf("%%e      : %e \n", 1234.5);
    printf("%%g      : %g \n", 0.0000123);
    printf("%%c      : %c \n", g);
    printf("%%s      : %s \n", str);
    printf("%%p      : %p \n", ptr);
    printf("%%x      : %x \n", 255);
    printf("%%X      : %X \n", 255);
    printf("%%o      : %o \n", 8);
    printf("%%n      : Hi%n \n", &count); // count me 2 store ho jayega
    printf("Count = %d \n", count);
    printf("%%%%     : 100%% \n");

    // Modifiers Examples
    printf("\n--- Modifiers ---\n");
    printf("Width %%5d    : |%5d| \n", 25);
    printf("Left %% -5d   : |%-5d| \n", 25);
    printf("Zero %%05d    : %05d \n", 25);
    printf("Preci
sion %%.3f: %.3f \n", 3.14159);

    return 0;
}
￼Enter
