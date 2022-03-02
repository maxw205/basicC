#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("hello world");
    int arr[15];
    int count = 0;
    char str[50];
    while(1)
    {
        if(count>4)
        {
            for(int k = 0;k<4;k++)
            {
                arr[k] = arr[k+1];
            }
        }

        //int input;
        //arr[count] = scanf("%d",&input);
        printf("\nEnter a number: ");
        gets(str);
        int value = atoi(str);
        printf("\nvalue: %d",value);
        if(count>4)
        {
            arr[4] = value;
        }
        else
        {
            arr[count] = value;
        }
        count++;
        if(count>4)
        {
            for(int i = 0;i<5;i++)
                {
                    printf("\n%d",arr[i]);
                }
        }
        else
        {
            for(int i = 0;i<count;i++)
                {
                    printf("\n%d",arr[i]);
                }
        }
    }

}