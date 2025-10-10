///////////////////////////////////////////////
//  WAP which accept temperature in fahrenheit
//  and convert it into celsius.
//  Input : 34
//  Output : 1.11111
///////////////////////////////////////////////

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCel = 0.0;
    dCel = ((fTemp - 32) * (5.0/9.0));
    return dCel;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit : \n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius :%f\n",dRet);

    return 0;
}