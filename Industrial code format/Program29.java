
import java.util.Scanner;   

public class Program29
{
    public static void main(String[] args) 
    {

        Scanner scanner = null; 
        scanner =new Scanner(System.in);    
        String sName = null;
        int iAge  = 0;
        float fMarks=0.0f;   //changes

        System.out.println("Enter your name :");
        sName = scanner.nextLine();            

        System.out.println("Enter your age:");
        iAge = scanner.nextInt();

        System.out.println("Enter your marks :");
        fMarks = scanner.nextFloat();
        
        System.out.println("Welcome ......"+sName);
        System.out.println("Your age is :"+iAge);
        System.out.println("Your marks :"+fMarks); 
     }    
}
/*
Suyog lalge
Enter your age:
56
Enter your marks :
765.876
Welcome ......Suyog lalge
Your age is :56
Your marks :765.876
*/