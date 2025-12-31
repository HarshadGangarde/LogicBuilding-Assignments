/////////////////////////////////////////////////////////////////////////////
//  Accept N numbers from users and display all such numbers which contains 3 digits in it 
//  Input : N :  6
//          Elements : 232 56 872 616 97
//  Output  : 232  872  616
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Digits(int Arr[], int iSize)
{
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        int num = abs(Arr[iCnt]);  
        if(num >= 100 && num <= 999)
        printf("%d ", Arr[iCnt]);
    }
    printf("\n");
}

int main()
{
    int iLength = 0;
    int *p = NULL;

    printf("Enter number of Elements : \n");
    scanf("%d", &iLength);

    if(iLength <= 0)
    {
        printf("Invalid input\n");
        return -1;
    }

    p = (int *)malloc(iLength * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d Elements :\n", iLength);
    for(int iCnt = 0; iCnt < iLength; iCnt++)
        scanf("%d", &p[iCnt]);

    printf("3-digit numbers are: ");
    Digits(p, iLength);

    free(p);
    return 0;
}
