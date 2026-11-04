//accept number from user and return count of even digits

import java.util.Scanner;

class Count
{
    public int CountEven(int iNo)
    {
        int idigit=0;
        int iCount=0;

        while (iNo!=0) 
        {
            idigit = iNo%10;
            if(idigit%2==0)
            {
                iCount++;
            }
            iNo = iNo/10;    
        }

        return iCount;
    }
}
class A13_01
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        Count cObj= new Count();
        
        int iValue1=0;
        int iRet=0;

        System.out.println("ENter a number :");
        iValue1 = scanner.nextInt();

        iRet = cObj.CountEven(iValue1);

        System.out.println("Numbers are :"+iRet);


    }
}