////////////////////////////////////////
//  Accept one Character from User and check whether that character is vowel(a,e,i,o,u) or not 
//  Input : E   Output : TRUE
//  Input : d   Output : FALSE
//////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char Ch)
{
    if ((Ch  == 'a') || (Ch  == 'e') || (Ch  == 'i') || (Ch  == 'o') || (Ch  == 'u') || (Ch  == 'A') || (Ch  == 'E') || (Ch  == 'I') || (Ch  == 'O') || (Ch  == 'U'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character : \n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }

    return 0;
}