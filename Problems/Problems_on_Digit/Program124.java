//Problems on Digit

import java.uti.Scanner;

class Program124
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        Digit digit = new Digit();

        System.out.println("Enter number :");
        int iValue=scanner.nextInt();

        digit.DisplayDigits(iValue);
    }
}

class Digit
{
    public void DisplayDigits(int iNo)
    {
      int iDigit=0;

      while (iNo!=0) 
      {
            iDigit = iNo%10;    
            iNo=iNo/10;                    
            System.out.println(iDigit);
      }
    }
} 
