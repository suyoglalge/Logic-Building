
import java.util.Scanner;

class A05_4
{
    public static void main(String args[])
    {
        Scanner scanner = new Scanner(System.in);

        int number;

        System.out.print("Enter number: ");
        number = scanner.nextInt();

        if(number % 3 == 0 && number % 5 == 0)
        {
            System.out.println("Divisible by Both");
        }
        else if(number % 3 == 0)
        {
            System.out.println("Divisible by 3 Only");
        }
        else if(number % 5 == 0)
        {
            System.out.println("Divisible by 5 Only");
        }
        else
        {
            System.out.println("Not Divisible by Either");
        }

    }
}
