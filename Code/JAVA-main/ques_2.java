public class ques_2 {
    public static void main(String[] args) {
        int[] arr={1,4,6,6,7,8,3,54,78,9};
        int max=max_in_arr(arr,0);
        System.out.println(max);
    }
    static int max_in_arr(int arr[],int max) {
        for (int i = 1; i < arr.length; i++) {
            if (arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
}
