import java.util.Scanner;
public class Main
{
	public static void main(String[] args)
	{
        Scanner sc = new Scanner(System.in);
        int sub1,sub2,sub3,sub4,sub5;
        int total,average;

        System.out.print("Enter marks of subject 1(out of 100): ");
        sub1 = sc.nextInt();
        
        System.out.print("Enter marks of subject 2(out of 100): ");
        sub2 = sc.nextInt();
        
        System.out.print("Enter marks of subject 3(out of 100): ");
        sub3 = sc.nextInt();
        
        System.out.print("Enter marks of subject 4(out of 100): ");
        sub4 = sc.nextInt();
        
        System.out.print("Enter marks of subject 5(out of 100): ");
        sub5 = sc.nextInt();

    
        
        total=sub1+sub2+sub3+sub4+sub5;
        average=total/5;

        System.out.println("Total marks: " + total);
        System.out.println("Average: " + average);
        

        sc.close();
    }
}
