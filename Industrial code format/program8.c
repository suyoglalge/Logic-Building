/*
    Step 1:Understand the problem statement.
    Step 2:Write the algoritihm.
    Step 3:Decide the prg language.
    Step 4:Write the proogram.
    Step 5:Test the program.
*/

//////////////////////////////////////////////////////////////////////////////
//
//  Step 1:Understand the problem statement.
//           User is going to enter any two integers
//           and we have to perform addition
//
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
//wite the algorithm
/*
   Start
   Accept first number as NO1.
   Accept first number as NO2.
   Create the variable as ans to store the result. 
   Perform the addition and store into ans.
   Display the result from ans.
*/
//////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//
//   Step 3:Decide the programming language.
//         We select C programming.
//
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//
// Step 4:Write the proogram.
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
///////////////////////////////////////////////////////
//   
//Function name:Addition
//  Input       :  integer,integer
//  Output      :  Integer
//  Discription :  Perform Addition
//  Date        :  04/10/2026
//  Author      :  Suyog Subhash Lalge
//
///////////////////////////////////////////////////////
int Addition(int ino1, int ino2)
{
    int ians=0;

    ians = ino1+ ino2; //buisness logic
    return ians;
}
/////////////////////////////////////////////////////
//
//      Entry Point Of the Application
//
/////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2=0, iResult=0;

    printf("Enter first number:");
    scanf("%d",&iValue1);

    printf("Enter Second number:");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1,iValue2);
    printf("Addition is :%d\n",iResult);
     
    return 0;
}
//////////////////////////////////////////////////
//////////////////////////////////////////////////
//          Step 5:Test the program.
//          Tested test Cases
//________________________________________________
//      INput1      Input2      output
//________________________________________________
//      10          11          21
//      11          0           11
//      0           11          11
//      20          -9          11
//      -9          20          11
//________________________________________________
//////////////////////////////////////////////////
//////////////////////////////////////////////////