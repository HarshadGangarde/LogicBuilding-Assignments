///////////////////////////////////////////////////////////////
//  Accept N numbers from user and accept Range, Display all elements from that range 
//  Input : N :  6 
//          Start : 60
//          End : 90
//          Elements : 85 66 3 76 93 88 
//  Output : 66 76 88  85
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void DisplayRange(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d ", Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int iStart = 0, iEnd = 0;
    int *p = NULL;

    printf("Enter Number of Elements : \n");
    scanf("%d",&iSize);

    printf("Enter Start of Range : \n");
    scanf("%d",&iStart);

    printf("Enter End of Range : \n");
    scanf("%d",&iEnd);

    p = (int *)malloc(iSize * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to Allocate Memory");
        return -1;
    }

    printf("Enter %d elements : \n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    printf("Elements in the given range are : ");
    DisplayRange(p, iSize, iStart, iEnd);

    free(p);
    return 0;
}
