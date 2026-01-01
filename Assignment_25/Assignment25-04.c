//  Write a program which accept string from user and display only 
//  digits from that string. 

#include<stdio.h>

void DisplayDigits(char *str)
{
    while( *str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            *str = *str + 0;
            printf("%c",*str);
        }
        str++;
    }    
}

int main()
{
    char Arr[30];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    DisplayDigits(Arr);

    return 0;
}