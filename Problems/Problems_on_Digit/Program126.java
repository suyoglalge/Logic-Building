//Problems on Digit: count number of digits from given number

import java.util.Scanner;

class Digit
{
    public int CountDigits(int iNo)
    {
      int iDigit=0;

      if (iNo<0)
      {
        iNo = -iNo;
        iNo = -iNo;
      }
 
      int iCnt = 0;

      while (iNo!=0) 
      {
        iDigit = iNo%10;    
        iNo=iNo/10;                    
        iCnt++;
      }
      
      return  iCnt;
    }

} 
class Program126
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        int iRet=0;

        Digit digit = new Digit();

        System.out.println("Enter number ");
        int iValue = scanner.nextInt();

        iRet = digit.CountDigits(iValue);

        System.out.println(iRet);   
      
    }
}
