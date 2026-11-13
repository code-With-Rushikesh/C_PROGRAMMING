#include<stdio.h>
#include<stdlib.h>

void Display(char *str) // OR  char str[]
{
    printf("%s\n",str);

}

int main()
{
    char Arr[100];
    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);
    Display(Arr); // Display (100)
    
    return EXIT_SUCCESS;
}
