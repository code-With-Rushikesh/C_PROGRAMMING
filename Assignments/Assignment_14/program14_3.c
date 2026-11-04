#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : NonFact
// Description   : Accept number and display all its non-factors
// Input         : Integer
// Output        : Non-factors
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 04/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
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

    NonFact(iValue);
    
    return EXIT_SUCCESS;
}