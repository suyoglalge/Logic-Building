
import java.util.Scanner;

class A05_5
{
    public static void main(String args[])
    {
        Scanner scanner = new Scanner(System.in);

        char ch;

        System.out.print("Enter a character: ");
        ch = scanner.next().charAt(0);

        if(ch >= 'A' && ch <= 'Z')
        {
            System.out.println("Uppercase Alphabet");
        }
        else if(ch >= 'a' && ch <= 'z')
        {
            System.out.println("Lowercase Alphabet");
        }
        else if(ch >= '0' && ch <= '9')
        {
            System.out.println("Digit");
        }
        else
        {
            System.out.println("Special Character");
        }
    }
}
