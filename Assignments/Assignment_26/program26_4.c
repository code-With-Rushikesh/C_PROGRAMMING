#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkSpecial
// Description   : Accept character and check whether it is special symbol
// Input         : Character (#,@,*,&,^ otherwise input given d)
// Output        : BOOL (TRUE / FALSE) (#,@,*,&,^ -> true otherwise d-> false )
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if ((ch == '!') || (ch == '@') || (ch == '#') || (ch == '$') ||
        (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
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

    bRet = ChkSpecial(cValue);

    if (bRet == TRUE)
    {
        printf("It is special Character\n");
    }
    else
    {
        printf("It is not a special Character\n");
    }
    
    return EXIT_SUCCESS; 

}