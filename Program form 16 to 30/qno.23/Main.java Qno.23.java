import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        double radius, area, circumference;
        System.out.print("Enter Radius of Circle: ");
        radius = input.nextDouble();
        area = Math.PI * radius * radius;
        circumference = 2 * Math.PI * radius;
        System.out.println("\n--- Circle Calculation ---");
        System.out.println("Area = " + area);
        System.out.println("Circumference = " + circumference);
    }
}