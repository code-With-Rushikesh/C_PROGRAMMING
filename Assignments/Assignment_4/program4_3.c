#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FindGreater
//  Description   : Finds greater between two numbers or checks equality
//  Input         : Integer, Integer
//  Output        : String / Result
//  Author        : Rushikesh Mahesh Suryawanshi
//  Date          : 22/10/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is Greater\n", iFirst);
    }
    else if(iSecond > iFirst)
    {
        printf("%d is Greater\n", iSecond);
    }
    else
    {
        printf("Both Numbers Are Equal\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}