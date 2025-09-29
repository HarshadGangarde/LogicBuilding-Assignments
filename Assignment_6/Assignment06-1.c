///////////////////////////////////////
//  WAP which accept no. from users and if number is < 50 print SMALL,if its is greter than 50 and less than 100 print medium, if it is greater than 100 then print large.
//  Input : 75
//  Output : Medium
///////////////////////////////////////

#include<stdio.h>

void Number(int iNo)
{
    if ( iNo < 50)
    {
        printf("Small\n");
    }
    else if ((iNo >= 50) && (iNo < 100))
    {
        printf("Medium\n");
    }
    else if (iNo >= 100)
    {
        printf("Large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}