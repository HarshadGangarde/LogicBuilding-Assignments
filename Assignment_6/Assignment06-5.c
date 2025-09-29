///////////////////////////////////////////////////
//  WAP which Accept Number from user and display its table
//  Input : 4
//  Output : 4  8  12  16  20  24  28  32  36  40
//////////////////////////////////////////////////

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0 ;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t",iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}