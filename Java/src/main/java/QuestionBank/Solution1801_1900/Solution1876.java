package QuestionBank.Solution1801_1900;

/**
 * @author windows
 */
public class Solution1876 {
    public int countGoodSubstrings(String s) {
        int count = 0;
        for (int i = 0; i < s.length() - 2; i++) {
            if (s.charAt(i) != s.charAt(i + 1) &&
                s.charAt(i) != s.charAt(i + 2) &&
                s.charAt(i + 1) != s.charAt(i + 2)){
                count++;
            }
        }
        return count;
    }
    
    
    public static void main(String[] args) {
        Solution1876 solution1876 = new Solution1876();
        System.out.println(solution1876.countGoodSubstrings("aababcabc"));
    }
}