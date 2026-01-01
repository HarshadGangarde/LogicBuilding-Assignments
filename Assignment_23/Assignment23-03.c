//Accept Character from user and check whether it is special symbol 
//or not (!, @, #, $, %, ^, &, *). 

#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
    bool bFlag = false;

    if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')) || ((ch >= '0') && (ch <= '9')))
    {
        bFlag = false;
    }
    else
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

    bRet = ChkSpecial(cValue);

    if(bRet == true)
    {
        printf("It is Special Character\n");
    }
    else
    {
        printf("It is not a Special Character\n");
    }

    return 0;
}