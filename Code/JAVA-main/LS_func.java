public class LS_func {
    public static void main(String[] args) {
        String str="Bob_the_builder";
        char target='t';
        System.out.println(Search(str,target));

    }
    static boolean Search(String str,char target) {
        for (int i = 0; i < str.length(); i++) {
            if (i==target) {
                return true;
            }
        }
        return  false;
    }
}
