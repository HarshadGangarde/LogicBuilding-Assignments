/////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and accept one another number as No. , 
// return index of first occurrence of that No.
// Input : N : 6
//         NO : 66
//         Elements : 23 66 87 66 97 67
// Output : 1
//
// Input : N : 6
//         NO : 12
//         Elements : 23 56 87 66 97 89
// Output : -1
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    if ((iSize <= 0) || (Arr == NULL))
    {
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;   
        }
    }

    return -1;  
}

int main()
{
    int iLength = 0, iCnt = 0, iValue = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

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

    iRet = FirstOcc(ptr, iLength, iValue);

    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("First occurrence of number is %d\n", iRet);
    }

    free(ptr);
    return 0;
}
