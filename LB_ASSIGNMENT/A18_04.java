/*
Enter number of rows:
6
Enter number of Column:
5
*       *       *       *       *
*       @       @       @       *
*       @       @       @       *
*       @       @       @       *
*       @       @       @       *
*       *       *       *       *
*/

import java.util.Scanner;
class A18_04
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        Patternprinting printobj = new Patternprinting();

        int iValue1 =0;
        int iValue2 =0;

        System.out.println("Enter number of rows:");
        iValue1 = scanner.nextInt();

        System.out.println("Enter number of Column:");
        iValue2 = scanner.nextInt();

        printobj.Pattern(iValue1 , iValue2);

        scanner.close();    
    }
}
class Patternprinting
{
    public void Pattern(int iRow, int iColumn)
    {
        int Outercnt = 0;
        int Innercnt = 0;

        for(Outercnt = 1; Outercnt <= iRow; Outercnt++)
        {
            for(Innercnt = 1; Innercnt <= iColumn; Innercnt++)
            {
                if(Outercnt == 1 || Outercnt == iRow ||
                   Innercnt == 1 || Innercnt == iColumn)
                {
                    System.out.print("*\t");
                }
                else
                {
                    System.out.print("@\t");
                }
            }

            System.out.println();
        }
    }
}