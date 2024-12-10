public class Main {
    public static void main(String[] args) {
        int result = add(5, 3);
        System.out.println("The sum is: " + result);
        greet();
        printSum(10, 20);
        System.out.println(add1(2, 3));       // calls add(int, int)
        System.out.println(add(2.5, 3.5));   // calls add(double, double)
    }

    public static int add(int a, int b) {
        return a + b;
    }
    public static void greet() {
        System.out.println("Hello, World!");
    }
    public static void printSum(int a, int b) {
        int sum = a + b;
        System.out.println("The sum is: " + sum);
    }
    public static int add1(int a, int b) {
        return a + b;
    }
    public static double add(double a, double b) {
        return a + b;
    }
}