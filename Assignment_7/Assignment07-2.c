//////////////////////////////////////
//  Accept amount in US Dollar and return its corresponding value in Indian Currency,consider 1$ as 85 rupees
//  Input : 2
//  Output : 170
/////////////////////////////////////

#include<stdio.h>

int DollorToINR(int iNo)
{
    int iAns = 0;
    iAns = iNo * 85;
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number of USD :\n");
    scanf("%d",&iValue);

    iRet = DollorToINR(iValue);

    printf("Value in INR :%d",iRet);

    return 0;
}