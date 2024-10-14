#include<stdio.h>
#include<string.h>
int main()
{
    char Arr[] = {'H','e','l','l','o','\0'};

    char Brr[] = "Hello";

    printf("%d\n",sizeof(Arr));
    printf("%d\n",sizeof(Brr));

    printf("Length of String is :%d\n",strlen(Arr));





    return 0;
}