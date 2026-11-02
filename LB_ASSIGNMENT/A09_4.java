/*
Question: find odd factorial
input:5
(1*3*5)=15
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
            if(iCount%2!=0)
            {
                iFactorial = iFactorial*iCount;
            }
        }

        System.out.println("Factorial of odd number are :"+iFactorial);
    }

    
}

public class A09_4
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
