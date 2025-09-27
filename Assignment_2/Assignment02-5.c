//Accept Number from user and check whether number is even or odd 

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the Number to check Whether it is odd or Even :\n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if (bRet == TRUE)
    {
        printf("%d is Even Number",iValue);
    }
    else
    {
        printf("%d is Odd Number",iValue);
    }
    
    return 0;
}