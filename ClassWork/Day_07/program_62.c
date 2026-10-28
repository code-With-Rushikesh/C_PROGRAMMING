#include<stdio.h>
#include<stdlib.h>

long long Factorial(int iNo)
{
    int icnt = 0;
    long long ifact = 0;

    for(icnt = 1, ifact = 1; icnt <= iNo; icnt++) // (,) ifact = 1;
    {
        ifact = ifact * icnt;
    }

    return ifact;

}

int main()
{
    int iValue = 0;
    long long iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %lld\n",iRet); // Format specifier ld use
    
    return EXIT_SUCCESS;
}