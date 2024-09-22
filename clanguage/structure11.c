#include<stdio.h>
#pragma pack(1)
struct demo
{
    int i;
    float f;
    char ch;
    double d;
};
union hello
{
    int i;
    float f;
    char ch;
    double d;
};
int main()
{
    struct demo dobj;
    union hello hobj;


    printf("size of structure is :%lu\n",sizeof(dobj));
    printf("size of union is :%lu\n",sizeof(hobj));

    return 0;
}