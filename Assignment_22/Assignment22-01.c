//Accept Character from user and check whether it is alphabet or not (A-Z a-z).

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    bool bFlag = false;

    if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
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
    scanf(" %c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("It is Character\n");
    }
    else
    {
        printf("It is not Character\n");
    }

    return 0;
}