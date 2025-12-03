import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    final double PI=3.1416;
	    double radius,height,volume;
	    System.out.print("Enter the radius:");
	    radius=sc.nextDouble();
	    System.out.print("Enter the height:");
	    height=sc.nextDouble();
	    volume=PI*radius*radius*height;
	    System.out.println("Volume:" +volume);
	    
	    sc.close();
	}
}
