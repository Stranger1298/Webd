package LS;

public class linearS {
    public static int linsearch(int nums[], int target) {
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == target) {
                return i;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        int nums[] = { 20, 30, 40, 68 };
        int target = 40;
        System.out.println(linsearch(nums, target));
    }

}
