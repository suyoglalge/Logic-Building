/*Print:
4444
3333
2222
1111
*/

import java.util.Scanner;

class Patternprinting
{
    public  void Pattern(int iRow , int iColumn)
    {
        int Outercnt=0;
        int Innercnt=0;

        for(Outercnt =iRow; Outercnt>=1 ; Outercnt--)
        {
            for(Innercnt =1; Innercnt<=iColumn ; Innercnt++)
            {
                System.out.print(Outercnt);
            }

            System.out.println();
        }
    }
}
class A16_04
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