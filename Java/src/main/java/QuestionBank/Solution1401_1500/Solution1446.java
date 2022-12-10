package QuestionBank.Solution1401_1500;
/**
 * @author windows
 */
public class Solution1446 {
    public int maxPower(String s) {
        int count = 0;
        int max = 0;
        for (int i = 1; i < s.length(); i++) {
            if (s.charAt(i) == s.charAt(i - 1)){
                count++;
                max = Math.max(max, count);
            }else {
                count = 1;
            }
        }
        return max;
    }
    
    
    public static void main(String[] args) {
        Solution1446 solution1446 = new Solution1446();
        System.out.println(solution1446.maxPower("leetcode"));
    }
}