
public class arrayList {
    public static void main(String[] args) {
//    int[] arr=new array[5];
    int[] arr1={1,5,4,3,7};
    swap(arr1,1,3);
        for (int i = 0; i < arr1.length; i++) {
            System.out.println(arr1[i]);
        }

    }
    static void swap(int[] arr1,int a,int b){
    int temp=arr1[a];
    arr1[a]=arr1[b];
    arr1[b]=temp;
    }
}
