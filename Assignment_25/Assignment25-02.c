//Write a program which accept string from user and convert it into upper case.

#include<stdio.h>

void StrUpperCase(char *str)
{
    while( *str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
    
}

int main()
{
    char Arr[30];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    StrUpperCase(Arr);

    printf("Modified String is : %s",Arr);

    return 0;
}