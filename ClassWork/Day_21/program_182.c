// coujt

#include<stdio.h>
#include<stdlib.h>

void CountFrequencyX(char *str)
{
    int iCountSmall = 0;
    int iCountCapital = 0;
    int iCountDigits = 0;

    while (*str != '\0')
    {
        if(*str >= 'A' || *str <= 'Z')
        {
            iCountCapital++;
        }
        else if(*str >= 'a' || *str <= 'z')
        {
            iCountSmall++;
        }
        else // issue
        {
            iCountDigits++;
        }

        str++;
    }

    printf("number of captal latter : %d\n",iCountCapital);
    printf("number of small latter : %d\n",iCountSmall);
    printf("number of digit : %d\n",iCountDigits);
    
}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n]s",Arr);

    CountFrequencyX(Arr);

    printf("Frequency special letter is : %d\n",iRet);

    return EXIT_SUCCESS;
}