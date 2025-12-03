import java.util.Scanner;
public class Main
{
	public static void main(String[] args)
	{
        Scanner sc = new Scanner(System.in);
        int rollNo,marksPF,marksIC,marksCG;
        int total,average;
        
        System.out.print("Enter Roll No: ");
        rollNo = sc.nextInt();

        System.out.print("Enter marks for Programming Fundamentals(out of 100): ");
        marksPF = sc.nextInt();

        System.out.print("Enter marks for Introduction to Computing(out of 100): ");
        marksIC = sc.nextInt();

        System.out.print("Enter marks for Computer Graphics(out of 100): ");
        marksCG = sc.nextInt();
        
        total=marksPF+marksIC+marksCG;
        average=total/3;

        System.out.println("\nStudent Details:");
        System.out.println("Roll No: " + rollNo);
        System.out.println("Marks in Programming Fundamentals: " + marksPF);
        System.out.println("Marks in Introduction to Computing: " + marksIC);
        System.out.println("Marks in Computer Graphics: " + marksCG);
    
        System.out.println("Total marks: " + total);
        System.out.println("Average: " + average);
        

        sc.close();
    }
}
