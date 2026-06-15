// C Introduction 







 // 1 . C Syntax - Lets understand what is each part does:

/*
 * Line 1: #include <stdio.h> tells C to include a header file.
 * This header lets us use input/output functions such as printf()
 *
 * Line 2: main() is a special function your program starts running here.
 * Any Code inside the curly brackets {} will be executed.
 *
 * Line 3: printf() is a function used to output (print) text to the screen.
 * In our example, it prints Hello World!
 *
 * Note: Every C statements ends with a Semicolon ;
 * Remember: The Compiler ignores extra Spaces and new lines,
 * but using multiple lines make Code easier to read.
 *
 * Line 4: return 0 ends the main() function and sends a value back to the o.s.
 * "0 means everything worked"
 *
 * Line 5: Do not forget the Closing curly bracket } to end the main() fn.
 */

#include <stdio.h>

int main() {
    printf("Hello World");
    return 0;
}

//Bash code 
//gcc hello.c -o hello
// ./hello


 
 // 2 .  C Statements
 /* 
 * Statements: A C.P. is a list of instructions that a Computer follows.
 * In C, these inst. Called statements
 * Example - printf("Hello World");
 * 
 * This types program Contains three statements
 * 1. printf("Hello World!");
 * 2. printf("Have a good day!");
 * 3. return 0;
 *
 * C Output (Print Text)
 * C New Lines =>
 * printf("Hello World! \n");
 * printf("I am lerning C.");
 *
 * * \n is called an escape Sequence.
 *
 * C Comments => Comments are ignored by the Compiler
 * Single-line Comments
 * // This is a Commet
 *
 * Multi-line Comments
 * /* The Code below will print words Hello World ! to the Screen */
 */

#include <stdio.h>

int main() {
    // This program contains three statements
    
    printf("Hello World!"); // Statement 1
    printf("Have a good day!"); // Statement 2

    // C New Lines Example
    printf("Hello World! \n"); // \n is called an escape Sequence
    printf("I am learning C.");

    return 0; // Statement 3
}
//Bash code 
//gcc statements.c -o statements
// ./statements
/* Output 
Hello World!Have a good day!Hello World! 
I am learning C.*/


 // 3 . C Variables
 /*
 * Variables => Variables are Containers for storing data value,
 * like numbers and characters.
 *
 * - int   - stores whole numbers (integers), such as 123 or -123
 * - float - stores numbers with decimals, such as 19.99 or -19.99
 * - char  - stores a single character, such as 'a' or 'B'
 *           characters are surrounded by single quotes
 *
 * (Declaring) Creating Variables =>
 * To create a variable, You must specify the type and give a name of Variable.
 * Syntax => // type variableName = value;
 *
 * Create a variable named "myNum" of type int and assign the value 15.
 * // int myNum = 15;
 *
 * You can also declare a variable first and assign value later.
 * Ex-
 * // Declare a Variable
 * int myNum;
 * // Assign a value later
 * myNum = 15;
 */

#include <stdio.h>

int main() {
    // 1. Declaring and assigning together
    int myNum = 15;      // stores whole numbers
    float myFloat = 19.99; // stores decimals
    char myChar = 'B';   // stores a single character

    // 2. Declare first, assign later
    int age;
    age = 21;

    // Print all variables
    printf("Integer: %d \n", myNum);
    printf("Float: %f \n", myFloat);
    printf("Character: %c \n", myChar);
    printf("Age: %d \n", age);

    return 0;
}
/* Output 
Integer: 15 
Float: 19.990000 
Character: B 
Age: 21 */


 

 
