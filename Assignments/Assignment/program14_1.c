#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : MultFact
// Description   : Accept number and display its multiplication of factors
// Input         : Integer
// Output        : Integer (Multiplication of factors)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 04/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iMult=iMult*iCnt;
        }
    }
    return iMult;

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

    iRet=MultFact(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}
