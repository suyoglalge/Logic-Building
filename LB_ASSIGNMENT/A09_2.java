/*
Question: Convert US $ into indian currency (1$ = Rs 70)
*/
import java.util.Scanner;

class PrintNumber
{
    public void Print( int iNO)
    {
        System.out.println("Converted"+iNO+"into indian money as:"+(iNO*70));
    }
}

public class A09_2
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        PrintNumber pObj = new PrintNumber();

        int iValue = 0;

        System.out.println("Enter $: ");
        iValue= scanner.nextInt();

        pObj.Print(iValue);

        scanner.close();


    }
}
