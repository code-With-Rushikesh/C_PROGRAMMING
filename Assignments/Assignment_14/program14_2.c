#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FactRev
// Description   : Accept number and display its factors in decreasing order
// Input         : Integer
// Output        : Factors in decreasing order
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 04/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo/2; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
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

    printf("Enter Number\n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return EXIT_SUCCESS;
}