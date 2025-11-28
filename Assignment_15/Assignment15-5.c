////////////////////////////////////////////////
//  Input : 4     4
//  Output : 1  2  3  4
//           1  @  @  4 
//           1  @  @  4  
//           1  2  3  4    
////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0;

    if (iRow != iCol)
    {
        printf("Invalid");
        return;
    }

    for (iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for (jCnt = 1; jCnt <= iCol; jCnt++)
        {

            if ((iCnt == 1) || (jCnt == 1) ||(iCnt == iCol) || (jCnt == iRow))
            {
                printf("%d\t",jCnt);
            }
            else
            {
                printf("@\t");
            }
            
        }
        printf("\n");
    }
    printf("\n");
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