import java.util.Scanner;

class ElectricityBillCheck
{
    public void BillCheck(int iBill)
    {
        if((iBill>0) &&(iBill<=100))
        {
            System.out.println("Your electricity bill is :"+(5*iBill));
        }
        else if((iBill>100) && (iBill<200))
        {
            System.out.println("Your electricity bill is:"+(7*iBill));
        }
        else 
        {
            System.out.println(("Your electricity bill is:"+(10*iBill)));
        }

    }
}
class A06_1
{
    public static void main(String[] args) 
    {
        int ivalue=0;

        Scanner scanner = new Scanner(System.in);

        ElectricityBillCheck eObj = new ElectricityBillCheck();

        System.out.println("Enter your electricity unit");
        ivalue= scanner.nextInt();

        eObj.BillCheck(ivalue);

    }
}
