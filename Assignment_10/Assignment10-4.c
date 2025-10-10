//////////////////////////////////////////////////////////////////////////
//  WAP which accept no. from user and return multiplication of all digit
// 
//  Input : 2395
//  Output : 270
//
//  Input : 1018
//  Output : 0
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultiDigits(int iNo)
{
    int iDigit = 0;
    int iMulti = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {

        iDigit = iNo % 10;
        iMulti = iMulti * iDigit;
        iNo = iNo / 10;
    }
    return iMulti;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);

    printf("Multiplication of all Digits is :%d",iRet);

    return 0;
}