//Question:Kilometer to Meter

#include<stdio.h>
#include<stdlib.h>

float Operations( float iNO)
{
    int km=1000;
    int iMeter=0;

    iMeter = iNO*km;

    return iMeter;
}
int main()
{

    float iValue=0.0f;
    float fret=0.0f;

    printf("Enter Kilometer:");
    scanf("%f",&iValue);

   fret =  Operations(iValue);

   printf("KM is coverted:%f\n",fret);

    return EXIT_SUCCESS;
}