#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SumNonFact
// Description   : Accept number and return summation of all its non-factors
// Input         : Integer
// Output        : Integer (Sum of non-factors)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 04/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
           iSum = iSum+iCnt;
        }
    }
    return iSum;
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

    iRet=SumNonFact(iValue);
    
    printf("%d",iRet);
    
    return EXIT_SUCCESS;
}