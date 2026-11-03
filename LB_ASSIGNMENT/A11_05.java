//accept range from user and display all numbers in between that range in reverse order


import java.util.Scanner;

class Operation
{
    public  void RangeDisplay(int iNo1 , int iNo2)
    {
        int iCount=0;
        int iSum=0;

        for(iCount=iNo2 ; iCount>=iNo1 ; iCount--)
        {
            System.out.println(iCount);
        }

        System.out.println(iSum);
    }

}
class A11_05
{

    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        int iValue1=0;
        int iValue2 =0;

        System.out.println("Enter First number:");
        iValue1 = scanner.nextInt();

        System.out.println("Enter second number:");
        iValue2 = scanner.nextInt();

        Operation obj = new Operation();

        obj.RangeDisplay(iValue1 , iValue2);

       

    }
}