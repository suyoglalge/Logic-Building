
import java.util.Scanner;

class A06_4
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int a, b, c;

        System.out.print("Enter three sides: ");
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();

        if(a <= 0 || b <= 0 || c <= 0)
        {
            System.out.println("Invalid Triangle");
        }
        else if(a + b > c && a + c > b && b + c > a)
        {
            System.out.println("Valid Triangle");
        }
        else
        {
            System.out.println("Invalid Triangle");
        }
    }
}
