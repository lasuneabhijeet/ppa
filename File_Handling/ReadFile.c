#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>

int main()
{
    char FileName[20];
    int FD = 0;
    char Data[100] = {'\0'};

    printf("Enter the file name that you want to open :\n");
    scanf("%s",FileName);
    FD = open(FileName,O_RDWR);
    if(FD==-1)
    {
        printf("Unable to open the file \n");
    }
    else{
        printf("File to succesfully Opened with FD :%d\n",FD);
    }
    read(FD,Data,27);
    printf("DAta from file is : %s\n ",Data);
    close(FD);
    return 0;
}
// Read mode               O_RDONLY
//write mode               O_WRONLY
//Read+Write mode           O_RDWR