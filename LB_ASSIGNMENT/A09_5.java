/*
question:Write a prograam which gives diffrence between
even factorial and odd factorial
*/
import java.util.Scanner;

class PrintNumber
{
    public void Print( int iNO)
    {
        int iCount=0;
        int iEvenFactorial=1;
        int iOddFactorial=1;
        int iResult=0;

        //updater
        if(iNO<0)
        {
            iNO = -iNO;
        }

        for(iCount=1 ; iCount<=iNO ; iCount++)
        {
            if(iCount%2==0)
            {
                iEvenFactorial = iEvenFactorial*iCount;
            }
        }


        for(iCount=1 ; iCount<=iNO ; iCount++)
        {
            if(iCount%2!=0)
            {
                iOddFactorial = iOddFactorial*iCount;
            }
        }
         
        iResult = (iEvenFactorial - iOddFactorial);

        System.out.println("Diffrence between factorial are :"+iResult);
    }

    
}

public class A09_5
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
