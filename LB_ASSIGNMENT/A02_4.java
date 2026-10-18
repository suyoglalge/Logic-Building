import java.util.Scanner;


class A02_3
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        int iValue=0 , iValue2;

        Operations oOpr = new Operations();

        System.out.println(("Enter a number :"));
        iValue=scanner.nextInt();

        System.out.println(("Enter a number :"));
        iValue2=scanner.nextInt();

        oOpr.Check(iValue , iValue2 );
    }
}
class Operations
{
    public void Check(int iNo1 , int iNo2)
    {
        int iCnt=0;

        for(iCnt=1 ; iCnt<=iNo2 ; iCnt++)
        {
            System.out.println(iNo1);
        }

    }
}