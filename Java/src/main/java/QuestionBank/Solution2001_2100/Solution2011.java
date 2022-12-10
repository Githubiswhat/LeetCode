package QuestionBank.Solution2001_2100;
/**
 * @author windows
 */
public class Solution2011 {
    public int finalValueAfterOperations(String[] operations) {
        int res = 0;
        for (int i = 0; i < operations.length; i++) {
            if (operations[i].indexOf('+') != -1){
                res++;
            }else {
                res--;
            }
        }
        return res;
    }
    
    
    public static void main(String[] args) {
        Solution2011 solution2011 = new Solution2011();
    }
}