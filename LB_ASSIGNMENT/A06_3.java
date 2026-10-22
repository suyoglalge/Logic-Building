
import java.util.Scanner;

class A06_3
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        float amount, discount, finalAmount;

        System.out.print("Enter purchase amount: ");
        amount = sc.nextFloat();

        if(amount < 0)
        {
            System.out.println("Invalid purchase amount");
        }
        else
        {
            if(amount < 1000)
            {
                discount = 0;
            }
            else if(amount < 5000)
            {
                discount = 10;
            }
            else
            {
                discount = 20;
            }

            finalAmount = amount - (amount * discount / 100);

            System.out.printf("Payable Amount = %.2f\n", finalAmount);
        }
    }
}
