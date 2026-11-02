/*
Question: find even factorial
input:5
(4*2)=8
*/
import java.util.Scanner;

class PrintNumber
{
    public void Print( int iNO)
    {
        int iCount=0;
        int iFactorial=1;

        //updater
        if(iNO<0)
        {
            iNO = -iNO;
        }

        for(iCount=1 ; iCount<=iNO ; iCount++)
        {
            if(iCount%2==0)
            {
                iFactorial = iFactorial*iCount;
            }
        }

        System.out.println("Factorial of even number are :"+iFactorial);
    }

    
}

public class A09_3
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        PrintNumber pObj = new PrintNumber();

        int iValue = 0;

        System.out.println("Enter a number : ");
        iValue= scanner.nextInt();

        pObj.Print(iValue);

        scanner.close();


    }
}
