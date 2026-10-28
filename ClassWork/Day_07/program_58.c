#include<stdio.h>
#include<stdlib.h>

int Summation(int iNo)
{
    int icnt = 0,isum = 0;

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        isum = isum + icnt;
    }

    return isum;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);

    printf("Summatios is : %d\n",iRet);
    
    return EXIT_SUCCESS;
}