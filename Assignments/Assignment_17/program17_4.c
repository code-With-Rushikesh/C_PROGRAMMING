#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
// Function Name : Pattern
// Description   : Display alternating positive and negative numbers pattern
// Input         : Integer, Integer (iRows 5, iColumns 5)
// Output        : Pattern grid (1,2,3,4,5 or -1,-2,-3,-4,-5)
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
        for (j = 1, iNo = 1; j <= iCol; j++, iNo++)
        {
            if ((i % 2) != 0)
            {
                printf("%d\t", iNo);
            }
            else
            {
                printf("%d\t", -iNo);
            }
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