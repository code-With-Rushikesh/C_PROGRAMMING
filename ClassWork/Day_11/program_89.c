#include<stdio.h>
#include<stdlib.h>

float AverageDigits(int iNo) 
{
    int iDigit = 0;
    int iSum = 0;
    int icount = 0;

    while(iNo != 0)
    {
        iDigit  % 10;
        iSum + iDigit;
        iSum = iSum + iDigit;
        icount++;
    }

    return iSum / icount;
}


int main()
{
    int iValue = 0;
    float fret = 0.0f;
    
    printf("Enter number :\n");
    scanf("%d",&iValue);

    fret = AverageDigits(iValue);

    printf("Average of Digits :%f\n",fret);

    return EXIT_SUCCESS;
}