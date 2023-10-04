public class Linear_search {
    public static void main(String[] args) {
        int arr[]={100,200,300};
        int target=100;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i]==target) {
                System.out.println("Gotcha!!");
                System.out.println(i);
                break;
            }
            else {
                System.out.println("Never mind!!");
            }
        }
    }
}
