package QuestionBank.Solution001_100;

/**
 * @author windows
 */
public class Solution88 {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        while(m > 0 || n > 0){
            int a = m > 0 ? nums1[m - 1] : Integer.MIN_VALUE;
            int b = n > 0 ? nums2[n - 1] : Integer.MIN_VALUE;
            if (a >= b){
                nums1[m + n - 1] = a;
                m--;
            }else{
                nums1[m + n - 1] = b;
                n--;
            }
        }
    }

    public static void main(String[] args) {
        Solution88 solution88 = new Solution88();
        solution88.merge(new int[]{1,2,3,0,0,0}, 3, new int[]{2, 5, 6}, 3);
    }



}
