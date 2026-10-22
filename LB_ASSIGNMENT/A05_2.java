
import java.util.Scanner;

class A05_2
{
    public static void main(String args[])
    {
        Scanner scanner = new Scanner(System.in);

        int year;

        System.out.print("Enter year: ");
        year = scanner.nextInt();

        if(year < 1)
        {
            System.out.println("Invalid Year");
        }
        else if(year % 400 == 0)
        {
            System.out.println("Leap Year");
        }
        else if(year % 100 == 0)
        {
            System.out.println("Not a Leap Year");
        }
        else if(year % 4 == 0)
        {
            System.out.println("Leap Year");
        }
        else
        {
            System.out.println("Not a Leap Year");
        }
    }
}
