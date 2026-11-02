#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Pattern printing
// Input         : Integer
// Output        : Special Symbol (*,#)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt =0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
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

    Display(iValue);
    
    return EXIT_SUCCESS;
}
