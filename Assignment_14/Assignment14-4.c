////////////////////////////////////////////////
//  Input : 4     5
//  Output : 1   2   3   4   5 
//          -1  -2  -3  -4  -5
//           1   2   3   4   5 
//          -1  -2  -3  -4  -5        
////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0, iNo = 1;

    for (iCnt = 1; iCnt <= iRow; iCnt++)
    {
        iNo = 1;
        for (jCnt = 1; jCnt <= iCol; jCnt++)
        {
            if ((iCnt % 2) != 0)
            {
                printf("%d\t", iNo);
                iNo++;
            }
            else 
            {
                printf("%d\t",-iNo);
                iNo++;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows : \n");
    scanf("%d",&iValue1);

    printf("Enter Number of Columns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}