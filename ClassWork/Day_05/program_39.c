// Input : 4
// 1  2  3  4 
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int icnt = 0;

    for(icnt = 1; icnt <= iNo; icnt++)
    {
    printf("%d\n",icnt);
    }

    printf("\n");

}
int main()
{
    int iValue = 0;

    printf("Enter the Frequency : \n");
    scanf("%d",&iValue);
    
    Display(iValue);

    return EXIT_SUCCESS;
}
