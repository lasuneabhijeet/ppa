#include<stdio.h>

int main()
{
    char c='m';
    int i=11;
    float f=3.14;
    double d=3.9987;



    int *iptr = &i;
    char *cptr=&c;
    float *fptr=&f;
    double *dptr=&d;

    return 0;
}