/////////////////////////////////////////////
//   WAP which accept number from user and print its number line
//  Input : 3
//  Output : -3 -2 -1 0 1 2 3   
/////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}