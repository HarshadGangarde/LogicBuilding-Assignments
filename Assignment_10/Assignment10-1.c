////////////////////////////////////////////////////////////////////////
//  WAP which accept no. from user and return the count of even digits
//  Input : 2395
//  Output : 1
//
//  Input : -1018
//  Output : 2
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    if (iNo == 0)
    {
        return 1;
    }

    while(iNo != 0)
    {

        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("Number of Even Digits are :%d",iRet);

    return 0;
}