import java.util.Scanner;

class Operations
{
    public void Check(int iNo)
    {
        if(iNo<10)
        {
            System.out.println("Hello");
        }
        else
        {
            System.out.println("Demo");
        }

    }
}
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