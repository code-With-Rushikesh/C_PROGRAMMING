#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int icnt = 0,ifact = 0;
    ifact = 1;

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        ifact = ifact * icnt;
    }

    return ifact;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %d\n",iRet);
    
    return EXIT_SUCCESS;
}