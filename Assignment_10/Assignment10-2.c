////////////////////////////////////////////////////////////////////////
//  WAP which accept no. from user and return the count of odd digits
//  Input : 2395
//  Output : 3
//
//  Input : -1018
//  Output : 2
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {

        iDigit = iNo % 10;
        if (iDigit % 2 != 0)
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

    iRet = CountOdd(iValue);

    printf("Number of Odd Digits are :%d",iRet);

    return 0;
}