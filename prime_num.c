#include<stdio.h>
int main()
{
    int num,count=0;
    printf("enter the number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
       if(num%i==0)
       {
        count++;
       }
    }
      if (count==2)
      {
        printf("bammardhi prime number raa");

      }
      else
      printf("not a prime number");
    
}