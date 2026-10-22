
import java.util.Scanner;

class EmployeeBonus
{
    public static void main(String args[])
    {
        Scanner scanner = new Scanner(System.in);

        float salary, bonus;
        int years;

        System.out.print("Enter monthly salary: ");
        salary = scanner.nextFloat();

        System.out.print("Enter years of service: ");
        years = scanner.nextInt();

        if(salary <= 0 || years < 0)
        {
            System.out.println("Invalid input");
        }
        else
        {
            if(years > 10)
            {
                bonus = salary * 15 / 100;
            }
            else if(years >= 5)
            {
                bonus = salary * 10 / 100;
            }
            else
            {
                bonus = salary * 5 / 100;
            }

            System.out.printf("Bonus = %.2f\n", bonus);
        }
    }
}
