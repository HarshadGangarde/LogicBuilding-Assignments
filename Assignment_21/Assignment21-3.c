/////////////////////////////////////////////////////////////////////////////
//  Accept N numbers from users and return the Difference between largest and smallest number
//  Input : N :  6
//          Elements : 85  66  3  66  93  88
//  Output  : 90 (93 - 3)
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iCnt = 0,iSmall = 0, iLarge = 0, iDiff = 0;
    iSmall = Arr[0], iLarge = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] < iSmall)
        {
            iSmall = Arr[iCnt];
        }
        else if (Arr[iCnt] > iLarge)
        {
             iLarge = Arr[iCnt];
        }
        iDiff = iLarge - iSmall;
    }
    return iDiff;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of Elements : \n");
    scanf("%d",&iLength);
    p = (int *)malloc(iLength * sizeof(int));

    if ( p == NULL)
    {
        printf("Unable to Allocate The Memory");
        return -1;
    }

    printf("Enter %d Elements :\n",iLength);

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter %d Element :",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p, iLength);

    printf("Difference is %d",iRet);

    free(p);


    return 0;
}