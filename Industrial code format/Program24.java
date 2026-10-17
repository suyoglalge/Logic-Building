import java.util.Scanner;    //using star is bad programingp practice

public class Program24
{
    public static void main(String[] args) 
    {

        Scanner scanner = null; 
        scanner =new Scanner(System.in);    
        String sName = null;
    

        System.out.println("Enter your name :");
        sName = scanner.next();            //diff between nextline vs next.

        System.out.println("Welcome ......"+sName);
        
     }    
}
/*
Enter your name :
suyog lalge
Welcome ......suyog
*/
