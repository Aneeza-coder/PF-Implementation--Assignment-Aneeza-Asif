import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int hours, minutes, seconds, totalSeconds;

    
        System.out.print("Enter hours: ");
        hours = sc.nextInt();

        System.out.print("Enter minutes: ");
        minutes = sc.nextInt();

        System.out.print("Enter seconds: ");
        seconds = sc.nextInt();
        
        totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

        System.out.println("\nTotal time in seconds: " + totalSeconds);

        sc.close();
    }
}
	
