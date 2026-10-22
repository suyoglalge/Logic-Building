
import java.util.Scanner;

class A05_1
{
    public static void main(String args[])
    {
        Scanner scanner = new Scanner(System.in);

        int a, b, c;

        System.out.print("Enter three numbers: ");
        a = scanner.nextInt();
        b = scanner.nextInt();
        c = scanner.nextInt();

        if(a >= b && a >= c)
        {
            System.out.println(a + " is Greatest");
        }
        else if(b >= a && b >= c)
        {
            System.out.println(b + " is Greatest");
        }
        else
        {
            System.out.println(c + " is Greatest");
        }
    }
}
