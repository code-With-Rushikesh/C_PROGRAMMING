#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkEqual
// Description   : Accept two numbers and check whether numbers are equal or not
// Input         : Integer, Integer
// Output        : BOOL (TRUE / FALSE)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 04/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

BOOL ChkEqual(int iNo1,int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0,iValue2 = 0;
    BOOL bRet = false;
    
    printf("Enter first Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number\n");
    scanf("%d",&iValue2);

    bRet=ChkEqual(iValue1,iValue2);
    
    if(bRet == true)
    {
        printf("Number is equal\n");
    }
    else
    {
        printf("Not equal\n");
    }

    return EXIT_SUCCESS;
}