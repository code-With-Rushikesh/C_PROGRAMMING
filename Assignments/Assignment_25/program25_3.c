#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkDigit
// Description   : Accept character and check whether it is a digit (0-9)
// Input         : Character (7) if (d)
// Output        : BOOL (TRUE / FALSE) (7 -> true / d -> false)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if ((ch >= '0') && (ch <= '9'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
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
    BOOL bRet = FALSE;

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    bRet = ChkDigit(cValue);

    if (bRet == TRUE)
    {
        printf("It is Digit\n");
    }
    else
    {
        printf("It is not a Digit\n");
    }
    
    return EXIT_SUCCESS; 

}