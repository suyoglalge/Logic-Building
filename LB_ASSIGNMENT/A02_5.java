import java.util.Scanner;


class A02_3
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        int iValue=0;

        Operations oOpr = new Operations();

        System.out.println(("Enter a number :"));
        iValue=scanner.nextInt();

        oOpr.Check(iValue );
    }
}
class Operations
{
    public void Check(int iNo1)
    {
       if(iNo1%2==0)
       {
        System.out.println("Number is even");
       }
       else
       {
        System.out.println("Number is ODD");
       }

    }
}