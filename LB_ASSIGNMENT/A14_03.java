//accepts number from user and display its non factor

import java.util.Scanner;

class Operation
{
    public  void MulFact(int iNo1)
    {
        int iCount=0;
        int iSum=1;
        
        for(iCount =1 ; iCount<=iNo1 ; iCount++)
        {
            if(iNo1%iCount!=0)
            {
                System.out.println(iCount ); 
            }
        }

        
    }

}
class A14_03
{

    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        int iValue1=0;
        int iValue2 =0;

        System.out.println("Enter First number:");
        iValue1 = scanner.nextInt();

        Operation obj = new Operation();

        obj.MulFact(iValue1 );

       

    }
}