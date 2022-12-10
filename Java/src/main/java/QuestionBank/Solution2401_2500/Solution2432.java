package QuestionBank.Solution2401_2500;
/**
 * @author windows
 */
public class Solution2432 {
    public int hardestWorker(int n, int[][] logs) {
        int duration = 0;
        int max = Integer.MIN_VALUE;
        int id = -1;
        for (int i = 0; i < logs.length; i++) {
            if (i == 0){
                duration = logs[i][1];
            }else{
                duration = logs[i][1] - logs[i - 1][1];
            }
            if (duration > max) {
                max = duration;
                id = logs[i][0];
            }else if (duration == max){
                id = Math.min(logs[i][0], id);
            }
        }
        return id;
    }
    
    
    public static void main(String[] args) {
        Solution2432 solution2432 = new Solution2432();
    }
}