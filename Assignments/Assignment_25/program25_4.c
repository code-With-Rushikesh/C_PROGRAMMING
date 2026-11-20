#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkSmall
// Description   : Accept character and check whether it is small case (a-z)
// Input         : Character (a), (A)
// Output        : BOOL (TRUE / FALSE) (a -> true / A -> false)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if ((ch >= 'a') && (ch <= 'z'))
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

    bRet = ChkSmall(cValue);

    if (bRet == TRUE)
    {
        printf("It is Small case Character\n");
    }
    else
    {
        printf("It is not a Small case Character\n");
    }
    
    return EXIT_SUCCESS; 

}