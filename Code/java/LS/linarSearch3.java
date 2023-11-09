package LS;

public class linarSearch3 {
    public static boolean search(String name, char key) {
        if (name.length() < 0) {
            return false;
        }
        for (int i = 0; i <= name.length(); i++) {
            if (key == name.charAt(i)) {
                System.out.println(i);
                return true;

            }
        }
        return false;
    }

    public static void main(String[] args) {
        String name = "Tomato";
        char key = 't';
        System.out.println(search(name, key));
    }
}
