//Write a program which accept string from user and convert it into lower case.

#include<stdio.h>

void StrLowerCase(char *str)
{
    while( *str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
    
}

int main()
{
    char Arr[30];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    StrLowerCase(Arr);

    printf("Modified String is : %s",Arr);

    return 0;
}