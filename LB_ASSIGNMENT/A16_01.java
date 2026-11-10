/*Print: ABCD
         ABCD
         ABCD
         ABCD
*/

import java.util.Scanner;

class Patternprinting
{
    public  void Pattern(int iRow , int iColumn)
    {
        int Outercnt=0;
        int Innercnt=0;
        char ch = 'A';

        for(Outercnt =1 ; Outercnt<=iRow ; Outercnt++)
        {
            for(Innercnt =1 , ch ='A'; Innercnt<=iColumn ; Innercnt++ , ch++)
            {
                System.out.print(ch);
            }

            System.out.println();
        }
    }
}
class A16_01
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

        
        
    }
}