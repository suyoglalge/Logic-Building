//question: Program which accepts number from user and print its number line    
// INput:4
//Output: -4,-3,-2,-1,0,1,2,3,4
import java.util.Scanner;

class PrintNumber
{
    public void Print( int iNO)
    {
        int iCount=0;

        for(iCount =iNO; iCount >= -iNO; iCount-- )
        {
            System.out.println( -iCount );
        }
    }
}

public class A07_3
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
