////////////////////////////////////////////////
//  Input : 6      6 
//  Output : 1 2 3 4 5 6 
//           1 2       6
//           1   3     6
//           1     4   6
//           1       5 6
//           1 2 3 4 5 6
////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0;

    for (iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for (jCnt = 1; jCnt <= iCol ; jCnt++)
        {

            if ((jCnt == iCnt) || (jCnt == 1) || (iCnt == 1) || (jCnt == iRow) || (iCnt == iCol) )
            {
                printf("%d\t",jCnt);
            }

            else
            {
                printf("\t");
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