//////////////////////////////////////////////////
//  Input : 4     4
//  Output :    a       b       c       d
//              1       2       3       4
//              a       b       c       d
//              1       2       3       4 
//////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0;
    int iNo = 1;
    char ch = 'a';

    for (iCnt = 1; iCnt <= iRow; iCnt++)
    {
        iNo = 1;
        ch = 'a';

        for (jCnt = 1; jCnt <= iCol; jCnt++)
        {
            if (iCnt % 2 != 0)  
            {
                printf("%c\t", ch);
                ch++;
            }
            else                 
            {
                printf("%d\t", iNo);
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
    scanf("%d", &iValue1);

    printf("Enter Number of Columns : \n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
