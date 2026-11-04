#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FactDiff
// Description   : Return difference between summation of factors and non-factors
// Input         : Integer
// Output        : Integer (Difference)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 04/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFactSum=iFactSum+iCnt;
        }
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iNonFactSum=iNonFactSum+iCnt;
        }
    }
    return iFactSum-iNonFactSum;
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);
    
    printf("%d",iRet);
    
    return EXIT_SUCCESS;
}