#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>

int main()
{
    char FileName[20];
    int FD = 0;

    printf("Enter the file name that you want to create :\n");
    scanf("%s",FileName);
    FD = creat(FileName,0777);
    if(FD==-1)
    {
        printf("Unable to creat the file \n");
    }
    else{
        printf("File to succesfully creat with FD :%d\n",FD);
    }
    return 0;
}