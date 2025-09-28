//////////////////////////////////
//  WAP which accept a number from user and display all its non factors
//  Input :  12
//  Output :  5  7  8  9  10  11
/////////////////////////////////

#include<stdio.h>

void NonFactor(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    printf("Non factors of %d are : \n",iValue);
    NonFactor(iValue);

    return 0;
}