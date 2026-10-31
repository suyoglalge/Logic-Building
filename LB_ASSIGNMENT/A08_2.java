/*
Question: Accept a number from the user and print the corresponding Number.
*/
import java.util.Scanner;

class PrintNumber
{
    public void Print( int iNO)
    {
        
        switch (iNO) {
            case 1:
                
                System.out.println("One");
                break;
        
            case 2:
                
                System.out.println("Two");
                break;
        
            case 3:
                
                System.out.println("Three");
                break;
        
            case 4:
                
                System.out.println("Four");
                break;
        
            case 5:
                
                System.out.println("five");
                break;
        
            case 6:
                
                System.out.println("Six");
                break;
        
            case 7:
                
                System.out.println("Seven");
                break;
        
            case 8:
                
                System.out.println("Eight");
                break;
        
            case 9:
                
                System.out.println("Nine");
                break;
        
            case 10:
                
                System.out.println("Ten");
                break;
        
            default:
                System.out.println("INvalid");
                break;
        }


    }
}

public class A08_2
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
