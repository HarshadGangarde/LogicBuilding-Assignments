////////////////////////////////////////////
//  WAP which accepts area in square feet 
//  and converts it into square meter
//  Input : 5
//  Output : 0.464515
////////////////////////////////////////////

#include<stdio.h>

double SquareMeter(float fNo)
{
    double dAns = 0.0;
    dAns = fNo * 0.0929;
    return dAns;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Area in Square Feet:\n");
    scanf("%f", &fValue);

    dRet = SquareMeter(fValue);

    printf("Value in Square Meter : %lf\n", dRet);

    return 0;
}
