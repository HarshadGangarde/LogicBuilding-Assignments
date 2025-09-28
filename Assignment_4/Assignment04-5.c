/////////////////////////////////////////
//  WAP which accept number from user and return difference between summation of all its factor and non factors
//  Input : 12 
//  Output : -34 (16 - 50)
/////////////////////////////////////////

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0, iDiff = 0 , iSum1 = 0 , iSum2 = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (( iNo % iCnt) == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else if (( iNo % iCnt) != 0) 
        {
            iSum2 = iSum2 + iCnt;
        }

        iDiff = iSum1 - iSum2;
    }
    return iDiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}