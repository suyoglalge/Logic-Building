//accept number from user and return multiplicatio of all digigt

import java.util.Scanner;

class Count
{
    public int MultiDigit(int iNo)
    {
        int idigit=0;
        int iMult=1;

        while (iNo!=0) 
        {
            idigit = iNo%10;
            iMult = iMult*idigit;
            iNo = iNo/10;    
        }

        return iMult;
    }
}
class A13_04
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        Count cObj= new Count();
        
        int iValue1=0;
        int iRet=0;

        System.out.println("ENter a number :");
        iValue1 = scanner.nextInt();

        iRet = cObj.MultiDigit(iValue1);

        System.out.println("Numbers are :"+iRet);


    }
}