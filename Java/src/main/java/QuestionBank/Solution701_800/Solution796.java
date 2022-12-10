package QuestionBank.Solution701_800;

/**
 * @author windows
 */
public class Solution796 {
    public boolean rotateString(String s, String goal) {
        if (s.length() != goal.length()){
            return false;
        }
        s += s;
        return s.indexOf(goal) != -1;
    }


    public static void main(String[] args) {
        Solution796 solution796 = new Solution796();
    }
}