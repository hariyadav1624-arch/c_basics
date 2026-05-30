#include<stdio.h>
int main()
{
 int num,count;
for(num=1;num<=100;num++)
{
    count=0;
    for (int i=1;i<num;i++)
    {
        
      if(num%i==0)
      {
       count+=i;
       
      }
    }
    if (num==count)
     {
        printf("%d,",num);

       }
   
}
}