///////////////////////////////////////
//  WAP to find Even Factorial of given number
//  Input : 5
//  Output : 8 (4 * 2)
//////////////////////////////////////

#include<stdio.h>

long long int EvenFactorial(int iNo)
{
    int iCnt = 0;
    long long int iFact = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) == 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    long long int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of Number is : %lld\n",iRet);

    return 0;
}