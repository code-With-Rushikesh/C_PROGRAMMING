// a  e  i  o  u
// A  E  I  O  U
#include<stdio.h>
#include<stdlib.h>

int CountVowels(char *str)
{
    int iCount  = 0;

    while (*str != '\0')
    {
        if(
            (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') ||
            (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u')
        )
        {
            iCount++;
        }
        str++;
    }
    
    return iCount;
}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n]s",Arr);

    iRet = CountVowels(Arr);

    printf("Frequency of Vowels is : %d\n",iRet);

    return EXIT_SUCCESS;
}


