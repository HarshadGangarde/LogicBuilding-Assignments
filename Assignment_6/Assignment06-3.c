////////////////////////////////////
//  WAP to find factorial of given number  
//  Input : 5
//  Output : 120   (5*4*3*2*1)
////////////////////////////////////

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0 , iFact = 1;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %d\n",iRet);

    return 0;
}