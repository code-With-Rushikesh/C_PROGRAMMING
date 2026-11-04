#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountRange
// Description   : Accept number and return count of digits between 3 and 7
// Input         : Integer
// Output        : Integer (Count)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 04/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo=-iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit > 3  && iDigit < 7)
        {
            iCount++;
        }
        iNo = iNo/10;
    }
    return iCount;
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

    iRet =  CountRange(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
    
}