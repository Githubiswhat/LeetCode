package QuestionBank.Solution1701_1800;

import java.util.HashMap;
import java.util.Map;

/**
 * @author windows
 */
public class Solution1742 {
    public int countBalls(int lowLimit, int highLimit) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = lowLimit; i <= highLimit; i++) {
            int sum = 0;
            int temp = i;
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
            map.put(sum, map.getOrDefault(sum, 0) + 1);
        }
        int max = 0;
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            max = Math.max(max, entry.getValue());
        }
        return max;
    }
    
    
    public static void main(String[] args) {
        Solution1742 solution1742 = new Solution1742();
    }
}