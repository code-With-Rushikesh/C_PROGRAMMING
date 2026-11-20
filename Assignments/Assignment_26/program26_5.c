#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Accept character and display ASCII in decimal, octal, and hex
// Input         : Character (A)
// Output        : Decimal, Octal, and Hexadecimal values (A-> Decimal 65, octal 0101,hexadecimal 0X41)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    printf("Decimal\t\t%d\n", ch);
    printf("Octal\t\t0%o\n", ch);
    printf("Hexadecimal\t0X%X\n", ch);
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    Display(cValue);
    
    return EXIT_SUCCESS; 

}