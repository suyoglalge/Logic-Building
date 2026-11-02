//Question:Kilometer to Meter

#include<stdio.h>
#include<stdlib.h>

float Operations( float sFeet)
{
    float sMeter=0.0f;

    sMeter = sFeet*0.0929;

    return sMeter;
}
int main()
{

    float iValue=0.0f;
    float fret=0.0f;

    printf("Enter Square feet:");
    scanf("%f",&iValue);

   fret =  Operations(iValue);

   printf("Square meter: %f \n",fret);

    return EXIT_SUCCESS;
}