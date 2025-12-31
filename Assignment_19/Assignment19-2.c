/////////////////////////////////////////////////////
//  Accept N numbers from user and return difference between frequency of even number and odd number
//  Input :   N : 7   , Elements = 85 66 3 80 93 88 90
//  Output :  1 (4 - 3)
/////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, iCount = 0, jCount = 0, iDiff = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCount++;
        }
        else if ((Arr[iCnt] % 2) != 0)
        {
            jCount++;
        }
        iDiff = iCount - jCount;
    }
        return iDiff;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter Number of Elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to Allocate the Memory");
        return -1;
    }
    printf("Enter %d elements : \n",iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Elements %d :",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p , iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0; 
}