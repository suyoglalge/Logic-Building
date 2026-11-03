//accepts number from user and display its diffrence between summasion of all factor and non factor
import java.util.Scanner;

class Operation
{
    public  void MulFact(int iNo1)
    {
        int iCount=0;
        int iSum1=0;
        int iSum2=0;
        int Ans=0;
        
        for(iCount =1 ; iCount<=iNo1 ; iCount++)
        {
            if(iNo1%iCount==0)
            {
                iSum1 = iSum1+iCount;
            }
            else if(iNo1%iCount!=0)
            {
                iSum2 = iSum2+iCount;
            }
        }

        Ans= iSum1 - iSum2;

        System.out.println("Diffrence between summasion of factor and non factors are:"+Ans);

        

        
    }

}
class A14_05
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