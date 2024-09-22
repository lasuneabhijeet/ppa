#include<stdio.h>
#include<stdlib.>//standard library
int main()
{
    int *ptr =  NULL;
    //step 1: allocate the memory

    ptr =(int*) malloc(5*sizeof(int));
    // step2:use the memory
    //step3:deallocate the memory
    free(ptr)
    return 0;
}