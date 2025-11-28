////////////////////////////////////////////////
//  Input : 6     6
//  Output : *  *  *  *  *  *
//           *  #  #  #  *  *
//           *  #  #  *  $  *
//           *  #  *  $  $  *
//           *  *  $  $  $  *
//           *  *  *  *  *  *
////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0;

    if(iRow != iCol)
    {
        printf("iRow is not equal to iCol can't print the output");
        return;
    }

    for (iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for (jCnt = iCol; jCnt > 0; jCnt--)
        {

            if ((jCnt == iCnt) || (jCnt == 1) || (iCnt == 1) || (jCnt == iRow) || (iCnt == iCol) )
            {
                printf("*\t");
            }
   
            else if (jCnt > iCnt)
            {
                printf("#\t");
            }
            else
            {
                printf("$\t");
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