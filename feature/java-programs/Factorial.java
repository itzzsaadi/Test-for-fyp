public class Factorial {
    static long factorial(int n) {
        long r = 1;
        for (int i = 2; i <= n; i++) r *= i;
        return r;
    }
    public static void main(String[] args) {
        System.out.println("5! = " + factorial(5));
    }
}
