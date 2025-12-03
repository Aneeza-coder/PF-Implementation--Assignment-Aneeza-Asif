import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        String name, gender;
        int age;
        float height;
        
        // Taking input
        System.out.print("Enter Name: ");
        name = input.nextLine();
        
        System.out.print("Enter Age: ");
        age = input.nextInt();
        
        System.out.print("Enter Height (in feet): ");
        height = input.nextFloat();
        
        System.out.print("Enter Gender: ");
        gender = input.next();   // for single word input
        
        // Printing output
        System.out.println("\n--- Student Information ---");
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Height: " + height + " ft");
        System.out.println("Gender: " + gender);
    }
}