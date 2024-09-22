#include<stdio.h>

int main()
{
    int arr[4]={10,20,30,40};

    printf("%d\n",arr[0]);//10
    printf("%d\n",arr[1]);//20
    printf("%d\n",arr[2]);//30
    printf("%d\n",arr[3]);//40

    printf("%lu\n",sizeof(arr));//16
    printf("%lu\n",sizeof(arr[0]));//4
    printf("%lu\n",sizeof(arr[2]));//4

    printf("%d\n",arr);
    printf("%d\n",&arr);
    printf("%d\n",&arr[0]);
    printf("%d\n",&arr[1]);
    printf("%d\n",&arr[2]);
    
    return 0;

}