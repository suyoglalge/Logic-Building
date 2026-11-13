/*Print:
2   4   6   8   10
1   3   5   7   9
2   4   6   8   10
1   3   5   7   9
*/

import java.util.Scanner;
class A17_02
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
        int Count = 0;

        for (Outercnt =1 ; Outercnt<=iRow ; Outercnt++)
        {
            if(Outercnt%2 !=0)                           //change count values as rows changes
            {
                Count =2;
            }
            else 
            {
                Count=1;
            }

            for(Innercnt =1 ; Innercnt<iColumn ; Innercnt++)
            {
                System.out.print(Count);
                Count = Count + 2;
            }
            System.out.println();
        }
    }
}