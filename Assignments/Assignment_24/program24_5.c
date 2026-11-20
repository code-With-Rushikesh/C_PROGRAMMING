#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : StrRevX
// Description   : Accept string and reverse that string in place
// Input         : Character pointer (String) (abcd)
// Output        : Modified reversed string (dcba)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

void StrRevX(char *str)
{
    int length = 0;

    while (str[length] != '\0')
        length++;

    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    StrRevX(arr);

    printf("Modified string is %s\n", arr);
    
    return EXIT_SUCCESS; 

}