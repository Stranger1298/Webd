public class conversion {
    // public static int btd(int bin) {
    // int power = 0;
    // int dec = 0;

    // while (bin > 0) {
    // int r = bin % 10;
    // dec = dec + r * (int) Math.pow(2, power);
    // power++;
    // bin = bin / 10;
    // }
    // return dec;
    // }

    public static void dtb(int dec) {
        int power = 0;
        int bin = 0;
        while (dec > 0) {
            int r = dec % 2;
            bin = bin + (r * (int) Math.pow(2, power));
            power++;
            dec = dec / 2;
        }
        System.out.println(bin);
    }

    public static void main(String[] args) {
        // System.out.println(btd(111));
        dtb(12);
    }
}
