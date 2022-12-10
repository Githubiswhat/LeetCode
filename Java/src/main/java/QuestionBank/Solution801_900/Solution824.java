package QuestionBank.Solution801_900;

/**
 * @author windows
 */
public class Solution824 {
    public String toGoatLatin(String sentence) {
        String[] splits = sentence.split(" ");
        StringBuilder ans = new StringBuilder();
        for (int i = 0; i < splits.length; i++) {
            StringBuilder sb = new StringBuilder(splits[i]);
            if (Character.toLowerCase(splits[i].charAt(0)) != 'a' &&
                Character.toLowerCase(splits[i].charAt(0)) != 'e' &&
                Character.toLowerCase(splits[i].charAt(0)) != 'i' &&
                Character.toLowerCase(splits[i].charAt(0)) != 'o' &&
                Character.toLowerCase(splits[i].charAt(0)) != 'u'){
                sb = new StringBuilder(sb.substring(1));
                sb.append(splits[i].charAt(0));
            }
            sb.append("ma");
            for (int j = 0; j <= i; j++) {
                sb.append("a");
            }
            ans.append(sb.toString() + " ");
        }
        return ans.substring(0, ans.length() - 1).toString();
    }


    public static void main(String[] args) {
        Solution824 solution824 = new Solution824();
    }
}