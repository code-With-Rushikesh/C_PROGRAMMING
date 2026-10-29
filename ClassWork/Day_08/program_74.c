#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void CheckPrime(int iNo)
{
    int icnt = 0;
    int isum = 0;

    for(icnt = 1; icnt<= iNo/2; icnt++)
    {
        if((iNo % icnt) == 0)
        {
            isum = isum + icnt;
        }
    }
    if(isum == 1)
    {
        printf("It is prime number\n");
    }
    else
    {
        printf("It is not prime number\n");
    }
}
int main(void)
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    CheckPrime(iValue);

    return EXIT_SUCCESS;
}