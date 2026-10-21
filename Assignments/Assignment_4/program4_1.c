#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckNumber
//  Description   : Determines whether entered number is positive, negative or zero
//  Input         : Integer
//  Output        : String (Positive / Negative / Zero)
//  Author        : Rushikesh Mahesh Suryawanshi
//  Date          : 22/10/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////

void CheckNumber(int iValue)
{
    if(iValue > 0)
    {
        printf("Positive Number\n");
    }
    else if(iValue < 0)
    {
        printf("Negative Number\n");
    }
    else
    {
        printf("Zero\n");
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

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
