#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Table
// Description   : Accept number and display its multiplication table
// Input         : Integer
// Output        : Multiplication table (1 to 10 multiples)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
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

    printf("Enter number: ");
    scanf("%d", &iValue);

    Table(iValue);
    
    return EXIT_SUCCESS;
}