import java.util.Scanner;

class Addmision
{
    public void CheckAddmision(int iMrk , int iAg)
    {
        if((iMrk>=60) && (iAg>=17))
        {
            System.out.println("You are Eligible for Admission");
        }
        else 
        {
            System.out.println("You are not eligible for admission");
        }

    }
}
class A06_2
{
    public static void main(String[] args) 
    {
        int iMarks=0 , iAge=0;

        Scanner scanner = new Scanner(System.in);

        Addmision eObj = new Addmision();

        System.out.println("Enter your  Marks");
        iMarks= scanner.nextInt();

        System.out.println("Enter your  Age");
        iAge= scanner.nextInt();

        eObj.CheckAddmision(iMarks , iAge);

    }
}
