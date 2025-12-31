/////////////////////////////////////////////////////////////////////////////
//  Accept N numbers from user and accept one another number as NO , 
//  return index of last occurrence of that NO. 
//  Input : N :  6
//          NO : 66
//          Elements : 23 56 87 66 97 45
//  Output  : 3
//
//  Input : N :  6
//          NO : 12
//          Elements : 23 56 87 66 97 65
//  Output  : -1
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0 , iIndex = -1;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iIndex = iCnt;
        }
        
    }
    return iIndex;

}

int main()
{
    int iLength = 0, iCnt = 0 , iValue = 0;
    int *ptr = NULL;
    int iRet = 1;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    // Step 1 : Allocate the memory
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

    // Step 2 : Use that memory
    iRet = LastOcc(ptr,iLength,iValue);
    if(iRet == -1)
    {
        printf("There is no such Number");
    }
    else
    {
        printf("Last Occurence of Number is %d",iRet);
    }
    
    // Step 3 : Free the memory 
    free(ptr);

    return 0;
}