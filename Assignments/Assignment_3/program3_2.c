#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayFactor
//  Description   : Accept number from user and print factors of that number
//  Input         : Integer
//  Output        : Integers
//  Author        : Rushikesh Mahesh Suryawanshi
//  Date          : 21/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo/2; i++)
    {
        if((iNo % i) == 0)
        {
            printf("%d\t", i);
        }
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

    DisplayFactor(iValue);

    return EXIT_SUCCESS;
}