///////////////////////////////////////
//  WAP which Accept Radius of circle from user and calculate its Area
//  Input : 5.3
//  Output : 88.2026
///////////////////////////////////////

#include<stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    float fPI = 3.14;
    dArea = fPI * fRadius * fRadius;
    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle :%f\n",dRet);

    return 0;
}