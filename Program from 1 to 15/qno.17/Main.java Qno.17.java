public class Main {
    public static void main(String[] args) {

        double num = 15.58971;

        int integral = (int) num;                
        double fractional = num - integral;      

        System.out.println("Integral part: " + integral);
        System.out.println("Fractional part: " + fractional);
    }
}