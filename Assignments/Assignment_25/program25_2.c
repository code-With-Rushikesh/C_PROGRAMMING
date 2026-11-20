#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkCapital
// Description   : Accept character and check whether it is capital letter (A-Z)
// Input         : Character (F) if  f
// Output        : BOOL (TRUE / FALSE) capital F -> true if f -> false
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
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

    bRet = ChkCapital(cValue);

    if (bRet == TRUE)
    {
        printf("It is Capital Character\n");
    }
    else
    {
        printf("It is not a Capital Character\n");
    }
    
    return EXIT_SUCCESS; 

}