import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    int age_in_years=9;
	    int age_in_months;
	    System.out.print("Enter the number of years: ");
	    age_in_years=sc.nextInt();
	    age_in_months=age_in_years*12;
		System.out.println("Age in months is: " +age_in_months );
		sc.close();
	}
}
