/*
123
123
123
123
*/
import java.util.Scanner;
class A21_02
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        

        int iValue1 =0;
        int iValue2=0;  
        
        System.out.println("Enter number of rows");
        iValue1 = scanner.nextInt();

        System.out.println("Enter numbers of column");
        iValue2 = scanner.nextInt();

        Pattern pobj = new Pattern();

        pobj.Designpattern(iValue1, iValue2);
    }
}
class Pattern
{
    public Pattern()
    {
        System.out.println("Inside Pattern class");
    }
    public void Designpattern(int iRow , int iColumn)
    {
        int i =0;
        int j=0;

        for(i=1 ; i<=iRow ; i++)
        {
            for(j=1 ; j<=iColumn ; j++)
            {
                System.out.print(j);
            }

            System.out.println();
        }
    }
}