#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckDivisibility
//  Description   : Checks whether a number is divisible by 5
//  Input         : Integer
//  Output        : String (Divisible by 5 / Not Divisible by 5)
//  Author        : Rushikesh Mahesh Suryawanshi
//  Date          : 22/10/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////

void CheckDivisibility(int iValue)
{
    if((iValue % 5) == 0)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}