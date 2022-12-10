package QuestionBank.Solution2301_2400;
/**
 * @author windows
 */
public class Solution2399 {
    public boolean checkDistances(String s, int[] distance) {
        int[] chars = new int[26];
        for (int i = 0; i < s.length(); i++) {
            int index = s.charAt(i) - 'a';
            if (chars[index] == 0){
                chars[index] = i + 1;
            }else{
                chars[index] = i - chars[index] + 1;
            }
        }
        for (int i = 0; i < distance.length; i++) {
            if (chars[i] != 0 && chars[i] - 1 != distance[i]){
                return false;
            }
        }
        return true;
    }
    
    
    public static void main(String[] args) {
        Solution2399 solution2399 = new Solution2399();
        System.out.println(solution2399.checkDistances("aa", new int[]{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}));
    }
}