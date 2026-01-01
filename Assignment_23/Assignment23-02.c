//Accept character from user. If it is capital then display all the 
//characters from the input characters till Z. If input character is small 
//then print all the characters in reverse order till a. In other cases 
//return directly. 

#include<stdio.h>

void Display(char ch)
{

    if((ch >= 'A') && (ch <= 'Z'))
    {
        for(char i = ch; i <= 'Z';i++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(char i = ch; i >= 'a';i--)
        {
            printf("%c",i);
        }
        printf("\n");
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = 0;

    printf("Enter the Character : \n");
    scanf(" %c",&cValue);

    Display(cValue);
    
    return 0;
}