//question:program which accepts number from user and print number till that number 


import java.util.Scanner;

class PrintNumber
{
    public void Print( int iNO)
    {
        int iCount=0;

        for(iCount =1; iCount <=iNO; iCount++ )
        {
            System.out.println( iCount );
        }
    }
}

public class A07_2
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
