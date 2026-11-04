//accept number from user and return diffrence between summasion of even digits and odd digit.

import java.util.Scanner;

class Count
{
    public int CountDiff(int iNo)
    {
        int idigit=0;
        int iEsum=0;
        int iOsum=0;

        while (iNo!=0) 
        {
            idigit = iNo%10;
            if(idigit%2==0)
            {
                iEsum = iEsum+idigit;
            }
            else if(idigit%2!=0)
            {
                iOsum = iOsum+idigit;
            }
            
            iNo = iNo/10;    
        }



        return(iEsum - iOsum);
    }
}
class A13_05
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        Count cObj= new Count();
        
        int iValue1=0;
        int iRet=0;

        System.out.println("ENter a number :");
        iValue1 = scanner.nextInt();

        iRet = cObj.CountDiff(iValue1);

        System.out.println("Numbers are :"+iRet);

        scanner.close();


    }
}