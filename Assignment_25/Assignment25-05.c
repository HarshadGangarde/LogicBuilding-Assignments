//Write a program which accept string from user and count number of white spaces

#include<stdio.h>

int CountWhiteSpaces(char *str)
{
    int iCount = 0;

    while( *str != '\0')
    {
        if(*str == ' ') 
        {
            iCount++;
        }
        str++;
    }    
    return iCount;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhiteSpaces(Arr);
    printf("Number of WhiteSpaces are : %d\n",iRet);

    return 0;
}