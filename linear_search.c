#include<stdio.h>
int main()
{
    int i;
printf("enter the list of numbers");
int list[5];
for ( i=0;i<=5;i++)
{
scanf("%d",&list[i]);
}

for(int j=0;j<=5;j++)
{
    if (list[i]>=list[i+1])
    {
        int temp=list[i];
        list[i]=list[i+1];
        list[i+1]=temp;
    }

}
printf("%d",list[5]);
}