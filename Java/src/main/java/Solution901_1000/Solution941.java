package Solution901_1000;

/**
 * @author windows
 */
public class Solution941 {
    public boolean validMountainArray(int[] arr) {
        int max = Integer.MIN_VALUE;
        int maxIndex = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > max){
                max = arr[i];
                maxIndex = i;
            }
        }
        if (maxIndex == 0 || maxIndex == arr.length - 1){
            return false;
        }
        for (int i = 0; i < maxIndex; i++) {
            if (arr[i] >= arr[i + 1]){
                return false;
            }
        }
        for (int i = maxIndex; i < arr.length - 1; i++) {
            if (arr[i] <= arr[i + 1]){
                return false;
            }
        }
        return true;
    }


    public static void main(String[] args) {
        Solution941 solution941 = new Solution941();
        System.out.println(solution941.validMountainArray(new int[]{2, 1}));
    }
}