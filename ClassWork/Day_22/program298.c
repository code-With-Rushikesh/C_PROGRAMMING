#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned No = 14;
    unsigned Ans = 0;

    Ans = ~No;
    
    printf("%u\n",Ans); // 42949681

    return EXIT_SUCCESS;
}