public class oop {
    int r_no;
    String name;
    int marks;

    oop() {
        this.r_no = 10;
        this.name = "Aman";
        this.marks = 100;
    }

    public static void main(String[] args) {
        oop aman = new oop();
        System.out.println(aman.marks);
    }
}
