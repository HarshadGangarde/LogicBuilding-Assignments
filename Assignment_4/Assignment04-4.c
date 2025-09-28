/////////////////////////////////////////
//  WAP which accept number from user and return summation of all its non factor
//  Input : 12
//  Output : 51
/////////////////////////////////////////

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0, iSum = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (( iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}