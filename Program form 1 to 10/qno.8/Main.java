import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        double fahrenheit,celsius;
        System.out.print("Enter the temperature in fahrenheit:");
        fahrenheit=sc.nextDouble();
        celsius=(5.0/9.0)*(fahrenheit-32);
        System.out.println("The temperature in celsius is:" +celsius);
        sc.close();
        
    }
}
