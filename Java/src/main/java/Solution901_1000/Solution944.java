package Solution901_1000;

import java.util.Arrays;
import java.util.stream.Collectors;

/**
 * @author windows
 */
public class Solution944 {
    public int minDeletionSize(String[] strs) {
        int count = 0;
        for (int i = 0; i < strs[0].length(); i++) {
            for (int j = 0; j < strs.length - 1; j++) {
                if (strs[j].charAt(i) > strs[j + 1].charAt(i)){
                    count++;
                    break;
                }
            }
        }
        return count;
    }


    public static void main(String[] args) {
        Solution944 solution944 = new Solution944();
        System.out.println(solution944.minDeletionSize(new String[]{"cba", "daf", "ghi"}));
    }
}