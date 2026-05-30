#include<stdio.h>
int main()
{
    int i,j,count=0,c_count;
    char word[50];
    char v[]="aeiouAEIOU";
    printf("enter the word: ");
    scanf("%s",word);
    for(i=0;word[i]!='\0';i++)
    {
        for (j=0;v[j]!='\0';j++)
        {
            if (word[i]==v[j])
            {

            
            count++;
            }
           

        }
    }
    c_count=strlen(word)-count;
printf("vowels count:%d\n",count);
printf("consonents count:%d",c_count);




}

