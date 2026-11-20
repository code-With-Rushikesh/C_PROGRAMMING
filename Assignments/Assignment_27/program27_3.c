#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Difference
// Description   : Return difference between small and capital character count
// Input         : Character pointer (String) (input GaneSH)
// Output        : Integer (Small count - Capital count) (GaneSH -> (3-3))
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iCount = 0;
    char cSmall = '\0', cCapital = '\0';

     while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            cSmall++;
        }
        else if ((*str >= 'A') && (*str <= 'Z'))
        {
            cCapital++;
        }
        str++;
    }

    return iCount = cSmall - cCapital; 
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^\n]", arr); 

    iRet = Differnce(arr);

    printf("%d\n", iRet);
    
    return EXIT_SUCCESS; 

}