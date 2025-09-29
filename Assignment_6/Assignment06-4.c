///////////////////////////////////////////////////
//  WAP which Accept Number from user and display its table in reverse order
//  Input : 4
//  Output : 40  36  32  28  24  20  16  12  8  4
//////////////////////////////////////////////////

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0 ;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt > 0; iCnt--)
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