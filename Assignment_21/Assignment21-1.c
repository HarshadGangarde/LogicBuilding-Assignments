/////////////////////////////////////////////////////////////////////////////
//  Accept N numbers from users and return the largest number
//  Input : N :  6
//          Elements : 23 56 87 66 97
//  Output  : 97
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0,iLarge = 0;
    iLarge = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] > iLarge)
        {
            iLarge = Arr[iCnt];
        }
    }
    return iLarge;
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

    iRet = Maximum(p, iLength);

    printf("Largest Number is %d",iRet);

    free(p);


    return 0;
}