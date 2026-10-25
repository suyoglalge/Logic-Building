//Problems on Digit

import java.util.Scanner;

class Program116
{
    public static void main(String[] args) 
    {
        int iNo=7592;

        System.out.println(iNo%10);    //2(last digit display)
        iNo=iNo/10;                    //759....2removed


        System.out.println(iNo%10);    //9(last digit display)
        iNo=iNo/10;                    //75..9removed

        System.out.println(iNo%10);    //5(last digit display)
        iNo=iNo/10;                    //7...5removed

        System.out.println(iNo%10);    //7(last digit display)
        iNo=iNo/10;                    //0...5removed
    }
}