/////////////////////////////////
//  WAP which accept number from user and display its factor in decreasing order
//  Input : 12
//  Output : 6  4  3  2  1 
/////////////////////////////////

#include<stdio.h>

int RevFact(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = (iNo / 2); iCnt >= 1; iCnt--)
    {
        if (( iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    RevFact(iValue);

    return 0;
}