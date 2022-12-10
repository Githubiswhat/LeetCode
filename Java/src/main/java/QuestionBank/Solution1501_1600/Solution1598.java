package QuestionBank.Solution1501_1600;

/**
 * @author windows
 */
public class Solution1598 {
    public int minOperations(String[] logs) {
        int count = 0;
        for (int i = 0; i < logs.length; i++) {
            if (logs[i].equals("../")){
                if (count > 0){
                    count--;
                }
            }else if(logs[i].equals("./")){
                continue;
            }else{
                count++;
            }
        }
        return count;
    }
    
    
    public static void main(String[] args) {
        Solution1598 solution1598 = new Solution1598();
    }
}