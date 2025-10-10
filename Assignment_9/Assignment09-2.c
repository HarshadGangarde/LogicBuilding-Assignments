////////////////////////////////////////////////////////////////
//  WAP which accepts no. from user and check whether it contains zero in it or not
//  Input : 2395
//  Output : There is No zero
//
//  Input : 2080
//  Output : It contains zero
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
            return true;
        }
        iNo = iNo / 10;
    }
    return false;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if (bRet == true)
    {
        printf("It contains Zero \n");
    }
    else
    {
        printf("There is No Zero\n");
    }

    return 0;
}