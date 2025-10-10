//////////////////////////////////////////////////////////////////
//  WAP which accept no. from user and count frequency of 4 in it
//  Input : 2395
//  Output : 0
//
//  Input : 14343
//  Output : 2
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountFour(int iNo)
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
        if (iDigit == 4)
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

    iRet = CountFour(iValue);

    printf("Number of 4 are :%d",iRet);

    return 0;
}