public class Day2 {
    public static String[] fizzBuzz(int A) {
        String[] arr = new String[A];
        for (int i = 1; i <= A; i++) {
            if (i % 3 == 0) {
                arr[i] = "Fizz";
            } else if (i % 5 == 0) {
                arr[i] = "Buzz";
            } else {
                arr[i] = Integer.toString(i);
            }
        }
        return arr;
    }

    public static void main(String[] args) {
        int A = 3;
        System.out.println(fizzBuzz(A));
    }
}
