import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

        double a, b, c, disc;

        
        System.out.print("Enter value of a: ");
        a = sc.nextDouble();

        System.out.print("Enter value of b: ");
        b = sc.nextDouble();

        System.out.print("Enter value of c: ");
        c = sc.nextDouble();

        
        disc = (b * b) - (4 * a * c);


        System.out.println("The value of discriminant (disc) is: " + disc);

        sc.close();
    }
}
	
