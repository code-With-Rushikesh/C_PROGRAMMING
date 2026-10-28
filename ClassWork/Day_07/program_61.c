#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int icnt = 0;
    long int ifact = 0;

    for(icnt = 1, ifact = 1; icnt <= iNo; icnt++) // (,) ifact = 1;
    {
        ifact = ifact * icnt;
    }

    return ifact;

}

int main()
{
    int iValue = 0;
    long int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %ld\n",iRet); //Format Specifier (ld) use
    
    return EXIT_SUCCESS;
}