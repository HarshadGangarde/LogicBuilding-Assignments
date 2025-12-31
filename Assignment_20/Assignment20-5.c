/////////////////////////////////////////////////////////////////////////////
//  Accept N numbers from users and return product of all odd elements 
//  Input : N :  6
//          Elements : 15 66 3 70 10 88
//  Output  : 45
//
//  Input : N :  6
//          NO : 12
//          Elements : 22 32 46 76 88 98 
//  Output  : 0
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Product(int Arr[], int iSize)
{
    int iCnt = 0;
    int iProduct = 1;
    bool bOddFound = false;

    if ((Arr == NULL) || (iSize <= 0))
    {
        return 0;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iProduct *= Arr[iCnt];
            bOddFound = true;
        }
    }

    return (bOddFound) ? iProduct : 0;
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    if(iLength <= 0)
    {
        printf("Invalid number of elements");
        return -1;
    }

    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Product(ptr, iLength);
    printf("Product is %d", iRet);

    free(ptr);
    return 0;
}
