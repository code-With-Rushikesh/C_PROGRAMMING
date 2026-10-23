
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Funcation name : Addition
// Input          : Integer, Integer
// Output         : Integer
// Description    : Perforam Additiom
// Date           : 04/10/2026 
// Author         : Rushikesh Mahesh Suryawanshi
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Addition
(
    int iNo1,  //First
    int iNo2  //Second
)

{
    int iAns = 0;

    iAns = iNo1 + iNo2;    // Business Logic

    return iAns;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Of The Application
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter First Number : \n");
    if(scanf("%d",&iValue1) !=1)
    {
        fprintf(stderr,"unable to proceed as input is invalid\n");

        return EXIT_FAILURE;
    }

    printf("Enter Second Number : \n");
    if(scanf("%d",&iValue2) !=1)
    {
        fprintf(stderr,"unable to proceed as input is invalid\n");

        return EXIT_FAILURE;
    }

    iResult = Addition(iValue1,iValue2);   

    printf("Addition is : %d\n",iResult);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// step 5 : Test the program
//
// Tested test cases
//----------------------------------------------------------------------------------------------------------
// Input    Input2      Output
//----------------------------------------------------------------------------------------------------------
//  10        11         21
//  11         0         11
//  0         11         11
//  20        -9         11
//  -9        20         11
//  -20       -11        -31
//
//
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


