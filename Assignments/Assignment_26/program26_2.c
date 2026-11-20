#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Accept character; toggle case if alphabet, else display as is
// Input         : Character (capital Q, small s, input 4, input %)
// Output        : Converted or original character (small q, capital S, output 4, output % )
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%c\n", ch + 32);
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c\n", ch - 32);
    }
    else
    {
        printf("%c\n", ch);
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

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    Display(cValue);
    
    return EXIT_SUCCESS; 

}