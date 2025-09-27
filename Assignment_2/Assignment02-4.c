//Accept 2 numbers from User and display 1st number in 2nd number of times
//  Input : 12  5
//  Output : 12 12 12 12 12 
///////////////////////////////// 

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }
    
    for (iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0, iCount = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    printf("Enter Frequency : \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}