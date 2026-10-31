/*
Accept a number from the user:

If number is less than 50 → Print Small.
If number is greater than 50 and less than 100 → Print Medium.
If number is greater than 100 → Print Large.
*/
import java.util.Scanner;

class PrintNumber
{
    public void Print( int iNO)
    {
        if((iNO<50))
        {
            System.out.println("Small");
        }
        else if((iNO>=50) &&(iNO<100))
        {
            System.out.println("Medium");

        }
        else if((iNO>100))
        {
            System.out.println("Large");
        }
        else 
        {
            System.out.println("Invalid Input");
        }


    }
}

public class A08_1
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        PrintNumber pObj = new PrintNumber();

        int iValue = 0;

        System.out.println("Enter any number: ");
        iValue= scanner.nextInt();

        pObj.Print(iValue);


    }
}
