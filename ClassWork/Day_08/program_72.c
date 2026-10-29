#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> // This Header File use For below bool it gives return type

bool CheckPerfect(int iNo)
{
    int icnt = 0, isum = 0;


    for(icnt = 1; icnt <= iNo/2; icnt++)
    {
        if((iNo % icnt ) == 0)
        {
            isum = isum + icnt;
        }
    }

    if(isum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iValue = 0;
    bool bret = false;
    printf("Enter number : \n");
    scanf("%d",&iValue);

    bret = CheckPerfect(iValue);

    if(bret == true)
    {
        printf("it is perfect number\n");
    }
    else
    {
        printf("it is not perfect number\n");
    }

    return EXIT_SUCCESS;
}

// Time Complexity : O(N\2)