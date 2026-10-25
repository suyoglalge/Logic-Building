//Problems on Digit

import java.util.Scanner;

class Program117
{
    public static void main(String[] args) 
    {
        int iNo=7592;

        System.out.println("Number is :"+iNo);//7592

        System.out.println(iNo%10);    //2(last digit display)
        iNo=iNo/10;                    //759....2removed
        System.out.println("Number is :"+iNo);//759


        System.out.println(iNo%10);    //9(last digit display)
        iNo=iNo/10;                    //75..9removed
        System.out.println("Number is :"+iNo);//75

        System.out.println(iNo%10);    //5(last digit display)
        iNo=iNo/10;                    //7...5removed
        System.out.println("Number is :"+iNo);//7

        System.out.println(iNo%10);    //7(last digit display)
        iNo=iNo/10;                    //0...5removed
        System.out.println("Number is :"+iNo);//0
    }
}