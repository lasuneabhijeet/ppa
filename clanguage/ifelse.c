#include<stdio.h>

int main()
{
    int no = 0,Result = 0
    ;

    printf("Enter number :\n");
    scanf("%d",&no);

    Result = no%2;

    if(Result == 0)
    {
        printf("IT is Even number \n");
    }
    else
    {
        printf("It is odd number \n");
    }
    return 0;
}