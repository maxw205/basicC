#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int arr[15];
    int count = 0;
    char str[50];
    char *history[15];
    char *temp;
    char *token[10];
    while(1)
    {

        if(count>4)
        {
            for(int k = 0;k<4;k++)
            {
                temp = strdup(history[k+1]);
                printf("this is temp: %s\n",temp);
                history[k] = temp;
            }
        }

        printf("enter string\n");
        gets(str);
        if(count>4)
        {
            history[4] = strdup(str);
            printf("this is: %s\n",history[4]);
        }
        else
        {
            history[count] = strdup(str);
            printf("this is: %s\n",history[count]);
        }

        count++;
        if(count>4)
        {
            for(int i = 0;i<5;i++)
            {
                printf("%d: %s\n",i,history[i]);
            }
        }
        else
        {
            for(int i = 0;i<count;i++)
            {
                printf("%d: %s\n",i,history[i]);
            }
        }
    }   

}