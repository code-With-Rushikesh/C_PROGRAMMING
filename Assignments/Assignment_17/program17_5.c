#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Display sequential incrementing number grid starting from row index
// Input         : Integer, Integer (iRows 4, iColumns 4)
// Output        : Pattern grid (12345,2345,3456,4567 display row and columns wise)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 17/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow,int iCol)
{
    int i =0;
    int j = 0;
    int iNo = 0;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1, iNo = i; j <= iCol; j++, iNo++)
        {
            printf("%d\t", iNo);
        }
        printf("\n");
    }
}


////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Number of Rows : \n");
    scanf("%d",&iValue1);

    printf("Enter Number of Col : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);


    return EXIT_SUCCESS;
}