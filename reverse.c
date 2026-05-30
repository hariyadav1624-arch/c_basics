#include<stdio.h>
int main()
{
    int num,rev=0,pal;

printf("enter the number: ");
scanf("%d",&num);
pal=num;
while( num!=0)
{
int reminder= num%10;
 rev=10*rev+reminder;
num=num/10;
}
printf("reverse %d is %d\n",pal,rev);
if (rev==pal)
{
    printf("palendrome");

}
else
printf("not a palendrome");
}
