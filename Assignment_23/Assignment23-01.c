//Accept character from user. If character is small display its 
//corresponding capital character, and if it capital then display its 
//corresponding small. In other cases display as it is.

#include<stdio.h>

char Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        ch = ch + 32;
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        ch = ch - 32;
    }
    else
    {
        ch = ch + 0;
    }
    return ch;

}

int main()
{
    char cValue = 0;
    char cRet = 0;

    printf("Enter the Character : \n");
    scanf("%c",&cValue);

    cRet = Display(cValue);
    printf("Converted Character is : %c",cRet);

    return 0;
}