/*Print:
12345
-1-2-3-4-5
12345
-1-2-3-4-5
12345
*/

import java.util.Scanner;
class A17_04
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
    public  void Pattern(int iRow , int iColumn)
    {
        int Outercnt=0;
        int Innercnt=0;
        int Count=0;
        int nCount =0;

        for(Outercnt =1 ; Outercnt<=iRow ; Outercnt++)
        {
            for(Innercnt =1,Count = 1, nCount =-1 ; Innercnt<=iRow ; Innercnt++)
            {
                if(Outercnt%2==0)
                {
                    System.out.print(nCount+"\t");
                    nCount--;
                }
                else if(Outercnt%2!=0)
                {
                    System.out.print(Count+"\t");
                    Count++;
                }
            }
            System.out.println();
        }
    }

}