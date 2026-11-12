/*Print:
    A A A A A
    B B B B B
    C C C C C
*/

import java.util.Scanner;

class Patternprinting
{
    public  void Pattern(int iRow , int iColumn)
    {
        int Outercnt=0;
        int Innercnt=0;
        char ch = 'a';
        char Ch = 'A';

        for(Outercnt =1 , Ch = 'A'; Outercnt<=iRow ; Outercnt++,Ch++)
        {
            for(Innercnt =1; Innercnt<=iColumn ; Innercnt++)
            {
                System.out.print(Ch+"\t");
            }

            System.out.println();
        }
    }
}
class A16_03
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