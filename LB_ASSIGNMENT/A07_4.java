//question:program which accepts N from user and print all odd number upto N.


import java.util.Scanner;

class PrintNumber
{
    public void Print( int iNO)
    {
        int iCount=0;

        for(iCount =1 ; iCount<=iNO ; iCount++)
        {
            if(iCount %2 !=0)
            {
                System.out.println(iCount);
            }
        }
    }
}

public class A07_4
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
