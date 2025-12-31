/////////////////////////////////////////////////////////////////////////////
//  Accept N numbers from users and return the smallest number
//  Input : N :  6
//          Elements : 23 56 87 66 97
//  Output  : 97
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0,iSmall = 0;
    iSmall = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] < iSmall)
        {
            iSmall = Arr[iCnt];
        }
    }
    return iSmall;
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

    iRet = Minimum(p, iLength);

    printf("Smallest Number is %d",iRet);

    free(p);


    return 0;
}