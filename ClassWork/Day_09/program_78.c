#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int icnt = 0;
    int isum = 0;

    for(icnt = 2; icnt<= iNo/2; icnt++)
    {
        if((iNo % icnt) == 0)
        {
            return false;
        }
    }

    return true;
}

int main(void)
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(true) //it is also same (bRet == true)
    {
        printf("it is prime number\n");
    }
    else
    {
        printf("is is not prime number\n");
    }

    return EXIT_SUCCESS;
}