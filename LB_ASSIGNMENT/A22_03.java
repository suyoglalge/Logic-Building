//1*2*3*4*5*6*

import java.util.Scanner;
class A22_03
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        PatternPrinting ppobj = new PatternPrinting();
        
        int iValue1=0;

        System.out.println("Enter a number :");
        iValue1 = scanner.nextInt();

        ppobj.Pattern(iValue1);
    }
}
class PatternPrinting
{
    public void Pattern( int iNo)
    {
        int iCnt=0;

        for(iCnt =1 ; iCnt<=iNo ; iCnt++)
        {
            System.out.print(iCnt + "*");
        }

    }
}