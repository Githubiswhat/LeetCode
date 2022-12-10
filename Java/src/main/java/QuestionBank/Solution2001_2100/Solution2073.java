package QuestionBank.Solution2001_2100;
/**
 * @author windows
 */
public class Solution2073 {
    public int timeRequiredToBuy(int[] tickets, int k) {
        int count = 0;
        while(tickets[k] != 0){
            for (int i = 0; i < tickets.length; i++) {
                if (tickets[i] != 0){
                    tickets[i]--;
                    count++;
                    if (tickets[k] == 0){
                        return count;
                    }
                }
            }
        }
        return count;
    }
    
    
    public static void main(String[] args) {
        Solution2073 solution2073 = new Solution2073();
    }
}