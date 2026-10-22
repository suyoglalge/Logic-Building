
import java.util.Scanner;

class A05_3
{
    public static void main(String args[])
    {
        Scanner scanner = new Scanner(System.in);

        float marks;

        System.out.print("Enter marks: ");
        marks = scanner.nextFloat();

        if(marks < 0 || marks > 100)
        {
            System.out.println("Invalid Marks");
        }
        else if(marks >= 90)
        {
            System.out.println("Grade A");
        }
        else if(marks >= 75)
        {
            System.out.println("Grade B");
        }
        else if(marks >= 60)
        {
            System.out.println("Grade C");
        }
        else if(marks >= 40)
        {
            System.out.println("Grade D");
        }
        else
        {
            System.out.println("Fail");
        }
    }
}
