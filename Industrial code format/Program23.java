import java.util.Scanner;    //using star is bad programingp practice

public class Program23
{
    public static void main(String[] args) 
    {

        Scanner scanner = null;    //best way to write
        String sName = null;
        
        scanner =new Scanner(System.in);    //class che reference banavle(INdustrial ways)

        System.out.println("Enter your name :");
        sName = scanner.nextLine();            //c/cpp mdhe character array banavaila lagto  

        System.out.println("Welcome ......"+sName);


        
    }    
}
