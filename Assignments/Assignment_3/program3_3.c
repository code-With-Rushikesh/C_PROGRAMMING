#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayEvenFactor
//  Description   : Accept number from user and print even factors of that number
//  Input         : Integer
//  Output        : Integers (Even factors)
//  Author        : Rushikesh Mahesh Suryawanshi
//  Date          : 21/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo/2; i++)
    {
        if(((iNo % i) == 0) && ((i % 2) == 0))
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

    DisplayEvenFactor(iValue);

    return EXIT_SUCCESS;
}