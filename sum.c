#include<stdio.h>
int fact(long int num)
{
if (num<=1)
return num;
else
return num*fact(num-1);
}

int main()
{
    long num,i;
   printf("enter the number");
   scanf("%d",&num);
   printf("factorial of %d is %d:",num,fact(num));

}