///////////////////////////////////////////////////////////////////////////
//  Input : N :  6
//          NO : 66
//          Elements :85  66  3  66  93  84
//  Output : TRUE
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iLength = 0, iCnt = 0 , iValue = 0;
    int *ptr = NULL;
    bool bRet = false;

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
    bRet = Search(ptr,iLength,iValue);
    if(bRet == true)
    {
        printf("%d is present\n",iValue);
    }
    else
    {
        printf("%d is not present\n",iValue);
    }
    
    // Step 3 : Free the memory 
    free(ptr);

    return 0;
}