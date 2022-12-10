package WeeklyCompetition.Weekly301_400.Weekly322;

/**
 * @author windows
 */
public class Solution2490 {
    public boolean isCircularSentence(String sentence) {
        String[] words = sentence.split(" ");
        if (words.length == 1){
            return words[0].charAt(0) == words[0].charAt(words[0].length() - 1);
        }
        for (int i = 0; i < words.length - 1; i++) {
            if (words[i].charAt(words[i].length() - 1) != words[i + 1].charAt(0)){
                return false;
            }
        }
        return words[0].charAt(0) == words[words.length - 1].charAt(words[words.length - 1].length() - 1);
    }

    public static void main(String[] args) {
        Solution2490 solution2490 = new Solution2490();
        System.out.println(solution2490.isCircularSentence("leetcode exercises sound delightful"));
    }
}
