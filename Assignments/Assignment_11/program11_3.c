#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : RangeSum
// Description   : Accept range and return addition of numbers (positive only)
// Input         : Integer, Integer (Start, End)
// Output        : Integer (Sum)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 04/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

int RangeSum(int iStart,int iEnd)
{
    int iRange = 0;
    int iSum = 0;

    if(iStart < 0 || iEnd < 0)
    {
        printf("invalid Input");
        return EXIT_FAILURE;
    }

    else
    {
        for(iRange = iStart; iRange <= iEnd; iRange++)
        {
            iSum=iSum+iRange;
        }
        return iSum;
    }
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0,iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting Number\n");
    scanf("%d",&iValue1);

    printf("Enter ending Number\n");
    scanf("%d",&iValue2);

    iRet=RangeSum(iValue1,iValue2);
    printf("%d",iRet);
    
    return EXIT_SUCCESS;
}