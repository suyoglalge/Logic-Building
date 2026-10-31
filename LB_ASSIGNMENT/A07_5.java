//question: program which accepts n number and print first 5 multiples of n


import java.util.Scanner;

class PrintNumber
{
    public void Print( int iNO)
    {
        int iCount=0;

        for(iCount =1 ; iCount<=5; iCount++)
        {
            System.out.println( iNO*iCount);
        }
    }
}

public class A07_5
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
