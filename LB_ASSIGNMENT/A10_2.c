//Question:Find area of circle

#include<stdio.h>
#include<stdlib.h>

float Operations( float iNO)
{
    float Area = 0.0f;
    float PI=3.14;

    Area = ( PI * (iNO*iNO));

    return Area;

}
int main()
{

    float iValue=0.0f;
    float fret=0.0f;

    printf("Enter Radius of circle:");
    scanf("%f",&iValue);

   fret =  Operations(iValue);

   printf("Area of Circle is :%f\n",fret);

    return EXIT_SUCCESS;
}