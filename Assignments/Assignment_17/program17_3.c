#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
// Function Name : Pattern
// Description   : Display alternating lowercase alphabets and numbers pattern
// Input         : Integer, Integer (iRows 5, iColumns 5)
// Output        : Pattern grid (a,b,c,d,e or 1,2,3,4,5)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 17/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRows,int iCol)
{
    int i =0;
    int j = 0;
    char ch = '\0';

    for(i = 1; i <= iRows; i++)
    {
        for(j = 1, ch = 'a'; j <= iCol; j++, ch++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t", ch);
            }
            else
            {
                printf("%d\t", j);
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