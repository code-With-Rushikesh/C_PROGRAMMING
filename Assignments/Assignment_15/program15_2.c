#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkGreater
// Description   : Check whether number is greater than 100 or not
// Input         : Integer
// Output        : BOOL (TRUE / FALSE)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 04/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = false;
    
    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet=ChkGreater(iValue);

    if(bRet == true)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }

    return EXIT_SUCCESS;
}