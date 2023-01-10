package QuestionBank.Solution101_200;

import com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIterNodeList;

import java.util.HashSet;

/**
 * @author windows
 */
public class Solution128 {
    public int longestConsecutive(int[] nums) {
        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i < nums.length; i++) {
            set.add(nums[i]);
        }
        int max = 0;
        for (int i = 0; i < nums.length; i++) {
            if (!set.contains(nums[i] - 1)){
                int currentNum = nums[i];
                int currentCount = 1;
                while (set.contains(currentNum + 1)) {
                    currentNum++;
                    currentCount++;
                }
                max = Math.max(max, currentCount);
            }
        }
        return max;
    }


    public static void main(String[] args) {
        Solution128 solution128 = new Solution128();
    }
}