/////////////////////////////////////////
//  WAP Which Accept number from user And display its multiplication of factors.
//  Input : 12
//  Output : 144   (1 * 2 * 3 * 4 * 6)
/////////////////////////////////////////

#include<stdio.h>

int MultiFact(int iNo)
{
    int iCnt = 0, iMult = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if (( iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("%d",iRet);

    return 0;
}