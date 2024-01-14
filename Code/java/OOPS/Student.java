public class Student {

    private int r_no;
    private String name;
    private int marks;

    public Student() {
        this.r_no = 10;
        this.name = "Aman";
        this.marks = 100;
    }

    public static void main(String[] args) {
        Student aman = new Student();
        System.out.println("Roll Number: " + aman.r_no);
        System.out.println("Name: " + aman.name);
        System.out.println("Marks: " + aman.marks);
    }
}
