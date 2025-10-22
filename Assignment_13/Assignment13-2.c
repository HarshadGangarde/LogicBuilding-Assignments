#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0;
    char ch = '\0';

    for (iCnt = 1; iCnt <= iRow; iCnt++)
    {
        if ((iCnt % 2) == 0)
        {
            ch = 'a';   
        }
        else
        {
            ch = 'A';   
        }

        for (jCnt = 1; jCnt <= iCol; jCnt++)
        {
            printf("%c\t", ch);
            ch++;
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
