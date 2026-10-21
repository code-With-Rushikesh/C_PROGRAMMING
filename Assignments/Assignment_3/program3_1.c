#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : PrintEven
//  Description   : Accept one number from user and print that number of even numbers on screen
//  Input         : Integer
//  Output        : Integers (Even numbers)
//  Author        : Rushikesh Mahesh Suryawanshi
//  Date          : 21/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt * 2);
    }
}

/////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
/////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}