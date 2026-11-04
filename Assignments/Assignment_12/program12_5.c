#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Count
// Description   : Count frequency of digits which are less than 6
// Input         : Integer
// Output        : Integer (Frequency)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 04/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

int Count(int iNo)
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
        if(iDigit < 6)
        {
            iCount++;
        }
        iNo=iNo/10;
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

    iRet=Count(iValue);

    printf("%d",iRet);
    
    return EXIT_SUCCESS;
}