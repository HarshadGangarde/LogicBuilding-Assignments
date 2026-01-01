//Write a program which accept string from user and check whether 
//it contains vowels in it or not.

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    bool bFlag = false;

    while (*str != '\0')
    {
        if(*str == 'A' || *str == 'a' ||  *str == 'E' || *str == 'e' || *str == 'I' || *str == 'i' || *str == 'O' || *str == 'o' || *str == 'U' || *str == 'u')
        {
            return true;
        }
        str++;
    }

    return false;
}

int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet == true)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }

    return 0;
}