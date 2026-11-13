#include<stdio.h>
#include<stdlib.h>

void Display(char *str) // OR  char str[]
{
    while (*str != '\0')
    {
        printf("%c\n",*str);
        str++;
    }
    
    str++;

}

int main()
{
    char Arr[100];
    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);
    
    Display(Arr); // Display (100)
    
    return EXIT_SUCCESS;
}


