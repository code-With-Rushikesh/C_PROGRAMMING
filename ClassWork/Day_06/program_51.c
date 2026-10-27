#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo) % 3 == 0)
    {
        printf("Check number is Divisible\n");

    }
    else
    {
        printf("number is Not divisible\n");
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