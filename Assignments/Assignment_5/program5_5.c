#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckCharacterType
// Description   : Accept a single character and determine whether it is an uppercase alphabet, lowercase alphabet, digit, or special character
// Input         : Character
// Output        : String (A,a,20,%)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////////////////////////////

void CheckCharacterType(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Uppercase Alphabet\n");
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Lowercase Alphabet\n");
    }
    else if((cValue >= '0') && (cValue <= '9'))
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}