package QuestionBank.Solution2001_2100;

import java.util.Arrays;
import java.util.LinkedList;

/**
 * @author windows
 */
public class Solution2099 {
    public int[] maxSubsequence(int[] nums, int k) {
        int[] arr = new int[nums.length];
        int len = nums.length;
        for (int i = 0; i < len; i++) {
            arr[i] = nums[i];
        }
        Arrays.sort(arr);
        LinkedList<Integer> list = new LinkedList<>();
        for (int i = 0; i < k; i++) {
            list.add(arr[len - i - 1]);
        }
        int[] res = new int[k];
        int index = 0;
        for (int i = 0; i < nums.length; i++) {
            for (int j = 0; j < list.size(); j++) {
                if (nums[i] == list.get(j)){
                    res[index++] = nums[i];
                    list.remove(j);
                    break;
                }
            }
        }
        return res;
    }




    public static void main(String[] args) {
        Solution2099 solution2099 = new Solution2099();
        System.out.println(Arrays.toString(solution2099.maxSubsequence(new int[]{2, 1, 3, 3}, 2)));
    }
}