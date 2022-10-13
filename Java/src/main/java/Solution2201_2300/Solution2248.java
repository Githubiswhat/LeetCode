package Solution2201_2300;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;

/**
 * @author windows
 */
public class Solution2248 {
    public List<Integer> intersection(int[][] nums) {
        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i < nums[0].length; i++) {
            set.add(nums[0][i]);
        }
        for (int i = 1; i < nums.length; i++) {
            HashSet<Integer> tempSet = new HashSet<>();
            for (int j = 0; j < nums[i].length; j++) {
                if (set.contains(nums[i][j])){
                    tempSet.add(nums[i][j]);
                }
            }
            set = tempSet;
        }
        ArrayList<Integer> res = new ArrayList<>(set);
        Collections.sort(res);
        return res;
    }
    
    
    public static void main(String[] args) {
        Solution2248 solution2248 = new Solution2248();
    }
}