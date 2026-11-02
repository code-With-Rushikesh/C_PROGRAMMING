#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : TableRev
// Description   : Accept number and display its multiplication table in reverse order
// Input         : Integer
// Output        : Multiples in reverse (10 to 1)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

void TableRev(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo; 
    }

    for (iCnt = 10; iCnt >= 1; iCnt--)
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

    TableRev(iValue);
    
    return EXIT_SUCCESS;
}