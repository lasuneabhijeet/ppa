#include<stdio.h>
int addition(int num1,int num2)
{
    int result = 0;
   result = num1 + num2;
   return result;

}
int substraction(int num1,int num2)
{
    int result = 0;
   result = num1 - num2;
   return result;

}
int main()
{
    int value1 = 0, Value2 = 0, result = 0;
    printf("Enter first number : \n");
    scanf("%d",&value1);

    printf("Enter second number : \n");
    scanf("%d",&Value2);

    result = addition(value1,Value2);
    printf("addition is = %d\n",result);

    result = substraction(value1,Value2);
    printf("substraction is = %d\n",result);


    return 0;
}