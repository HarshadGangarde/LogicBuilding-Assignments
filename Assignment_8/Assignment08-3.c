///////////////////////////////////////////
//  WAP which accepts Distance in Kilometer 
//  and converts it into Meter.
//  Input : 5
//  Output : 5000
///////////////////////////////////////////

#include<stdio.h>

float KMtoMeter(float fNo)
{
    float fAns = 0.0f;
    fAns = fNo * 1000;
    return fAns;
}

int main()
{
    float fValue = 0.0f;
    float fRet = 0.0f;

    printf("Enter Distance in KiloMeter:\n");
    scanf("%f", &fValue);

    fRet = KMtoMeter(fValue);

    printf("Value in Meter : %.2f\n", fRet);

    return 0;
}
