#include <stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description   : Accept one number and check whether it is divisible by 5 or not
//  Input         : Integer
//  Output        : Boolean (TRUE / FALSE)
//  Author        : Rushikesh Mahesh Suryawanshi
//  Date          : 20/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

/////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }

    return EXIT_SUCCESS;
}