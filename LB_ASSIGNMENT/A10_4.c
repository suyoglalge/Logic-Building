//Question:Kilometer to Meter

#include<stdio.h>
#include<stdlib.h>

float Operations( float fTemp)
{
    float cTemp=0.0f;

    cTemp = (fTemp - 32) * 5 / 9;

    return cTemp;
}
int main()
{

    float iValue=0.0f;
    float fret=0.0f;

    printf("Enter Tempreture in fehrenhite:");
    scanf("%f",&iValue);

   fret =  Operations(iValue);

   printf("Temprature in celcius is %f \n",fret);

    return EXIT_SUCCESS;
}