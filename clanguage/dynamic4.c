#include<stdio.h>
#include<stdlib.>//standard library
int main()
{
    int *ptr =  NULL;
    ptr =(int*) malloc(5*sizeof(int));
    ptr = (int*)realloc(ptr,7*sizeof(int));// case1
    ptr = (int*)realloc(ptr,2*sizeof(int));// case2
   
    
    return 0;
}