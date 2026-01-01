//Write a program which accept string from user and return 
//difference between frequency of small characters and frequency of 
//capital characters.

#include<stdio.h>

int Difference(char *str)
{
    int iCntSmall = 0 , iCntCapital = 0 , iDiff = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCntSmall++;
        }
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCntCapital++;
        }
        str++;

    }
    iDiff = iCntSmall - iCntCapital;

    return iDiff;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);
    printf("Diffence between Small Characters and Capital Characters is :%d\n",iRet);

    return 0; 
}