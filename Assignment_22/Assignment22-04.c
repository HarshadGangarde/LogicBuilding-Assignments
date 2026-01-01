//Accept Character from user and check whether it is small case or not (a-z).

#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char ch)
{
    bool bFlag = false;

    if((ch >= 'a') && (ch <= 'z'))
    {
        bFlag = true;
    }
    return bFlag;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == true)
    {
        printf("It is small case Character\n");
    }
    else
    {
        printf("It is not a small case Character\n");
    }

    return 0;
}