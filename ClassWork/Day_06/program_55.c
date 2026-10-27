#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo % 3)== 0)
    {
        if((iNo % 5)== 0)
        {
           printf("Check number is Divisible\n");
        }
        else
        {
           printf("number is not Divisible\n");
        }
    }
    else
    {
         printf("number is not Divisible\n");
    }
        
}

int main()
{
    int iValue = 0;
    printf("Enter number : \n");

    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}