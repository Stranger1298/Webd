package LS;

public class linearS2 {
    public static int lineaString(String fruits[], String target) {
        for (int i = 0; i <= fruits.length; i++) {
            if (fruits[i] == target) {
                return i;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        String fruits[] = { "Apple", "Banana", "Orange", "Grapes", "Kiwi" };
        String target = "Kiwi";
        System.out.println(lineaString(fruits, target));
    }
}
