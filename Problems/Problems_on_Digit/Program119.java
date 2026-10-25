//Problems on Digit

import java.util.Scanner;

class Program119
{
    public static void main(String[] args) 
    {
        int iNo=175902;

        System.out.println("Number is :"+iNo);//175902

        System.out.println(iNo%10);    //2(last digit display)
        iNo=iNo/10;                    //17590
        System.out.println("Number is :"+iNo);//17590

        System.out.println(iNo%10);    //17590
        iNo=iNo/10;                    //1759
        System.out.println("Number is :"+iNo);//1759

        System.out.println(iNo%10);    //9
        iNo=iNo/10;                    //175
        System.out.println("Number is :"+iNo);//7

        System.out.println(iNo%10);    //5
        iNo=iNo/10;                    //17
        System.out.println("Number is :"+iNo);//17

        System.out.println(iNo%10);    //7
        iNo=iNo/10;                    //1
        System.out.println("Number is :"+iNo);//1

        System.out.println(iNo%10);    //1
        iNo=iNo/10;                    //0
        System.out.println("Number is :"+iNo);//0
    }
}
/*
C:\Users\Suyog\Desktop\LB>java Program119.java
Number is :175902
2
Number is :17590
0
Number is :1759
9
Number is :175
5
Number is :17
7
Number is :1
1
Number is :0
*/