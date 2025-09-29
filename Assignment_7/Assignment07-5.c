/////////////////////////////////////////
//  WAP which returns Difference between Even Factorial and odd Factorial of Given number 
//  Input : 5
//  Output : -7  (8 - 15)
//////////////////////////////////////////

#include<stdio.h>

long long int FactorialDiff(int iNo)
{
    int iCnt = 0;
    long long int iFact1 = 1, iFact2 = 1, iDiff = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <=iNo; iCnt++)
    {
        if ((iCnt % 2) == 0)
        {
            iFact1 = iFact1 * iCnt;
        }
        else
        {
            iFact2 = iFact2 * iCnt;
        }
    }
    iDiff = iFact1 - iFact2;
    return iDiff;
}

int main()
{
    int iValue = 0;
    long long int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is : %lld\n",iRet);

    return 0;
}