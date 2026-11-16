// 2 4 6 8 10 12 14 16

import java.util.Scanner;
class A22_05
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
        int i =2;

        for(iCnt =1 ; iCnt<=iNo; iCnt++)
        {
            System.out.print(i+"");
            i = i +2;
        }

    }
}