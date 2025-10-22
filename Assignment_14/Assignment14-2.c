//////////////////////////////////////////////////
//  Input : 4     4
//  Output : 2       4       6       8
//           1       3       5       7
//           2       4       6       8
//           1       3       5       7
//////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0, iNo = 1;

    for (iCnt = 1; iCnt <= iRow; iCnt++)
    {
        iNo = 1;

        for (jCnt = 1; jCnt <= iCol; jCnt++)
        {
            if ((iCnt % 2) == 1)   
            {
                printf("%d\t", iNo * 2);
            }
            else                      
            {
                printf("%d\t", (iNo * 2) - 1);
            }
            iNo++;
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows : \n");
    scanf("%d", &iValue1);

    printf("Enter Number of Columns : \n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
