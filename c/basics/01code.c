/*
Program to demonstrate input/output of all basic data types
*/
#include <stdio.h>

int main(){
    // Declare all primitive and derived data types

    char charValue;
    unsigned char uCharValue;

    short shortValue;
    unsigned short uShortValue;

    int intVal;
    unsigned int uIntValue;

    long longValue;
    unsigned long uLongValue;

    long long longLongValue;
    unsigned long long uLongLongValue;

    float floatValue;
    double doubleValue;
    long double longDoubleValue;

    // Read Input in each type

    printf("Enter a character");
    charValue = getChar();
    getChar(); // dummy getchar() to capture input

    printf("Enter a Signed short value");
    scanf("%hi",&shortValue);

    printf("Enter an unsigned short value");
    scanf("hu",&uShortVal);

     printf("Enter an signed integer value: ");
    scanf("%d", &intVal);
    
    printf("Enter an unsigned integer value: ");
    scanf("%lu", &uIntVal);
    
    printf("Enter a signed long value: ");
    scanf("%ld", &longVal);
    
    printf("Enter an unsigned long value: ");
    scanf("%lu", &uLongVal);
    
    printf("Enter a signed long long value: ");
    scanf("%lld", &longLongVal);
    
    printf("Enter an unsigned long long value: ");
    scanf("%llu", &uLongLongVal);
    
    printf("Enter a float value: ");
    scanf("%f", &floatVal);
    
    printf("Enter a double value: ");
    scanf("%lf", &doubleVal);
    
    printf("Enter a long double value: ");
    scanf("%Lf", &longDoubleVal);
    
    // Print all the variables

     printf("\nYou entered character: '%c' \n", charVal);
    printf("You entered unsigned character: '%c' \n\n", uCharVal);
    
    printf("You entered signed short: %hi \n", shortVal);
    printf("You entered unsigned short: %hu \n\n", uShortVal);
    
    printf("You entered signed int: %d \n", intVal);
    printf("You entered unsigned int: %lu \n\n", uIntVal);
    
    printf("You entered signed long: %ld \n", longVal);
    printf("You entered unsigned long: %lu \n\n", uLongVal);
    
    printf("You entered signed long long: %lld \n", longLongVal);
    printf("You entered unsigned long long: %llu \n\n", uLongLongVal);
    
    printf("You entered float: %f \n", floatVal);
    printf("You entered double: %lf \n", doubleVal);
    printf("You entered long double: %Lf \n", longDoubleVal);

 
    return 0;
    
}

// Points to note:

/*
1.\n is an escape sequence character used to print new line (move to next line).
2.The getchar() function reads single character and stores to some character variable.
During a character input suppose we input C and then enter which is also considered as a character.
Internally, getchar() reads and stores C character to charVal and tries to store the
enter character to uCharVal. 
This is because I have used an extra getchar() to eliminate the enter character.
*/
