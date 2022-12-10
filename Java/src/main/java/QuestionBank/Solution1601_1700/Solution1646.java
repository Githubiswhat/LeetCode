package QuestionBank.Solution1601_1700;

/**
 * @author windows
 */
public class Solution1646 {
    public int getMaximumGenerated(int n) {
        if (n < 1){
            return 0;
        }
        int[] res = new int[n + 1];
        res[0] = 0;
        res[1] = 1;
        int max = 1;
        for (int i = 2; i < res.length; i++) {
            if (i % 2 == 0){
                res[i] = res[i / 2];
            }else{
                res[i] = res[i / 2] + res[i / 2 + 1];
            }
            max = Math.max(max, res[i]);
        }
        return max;
    }
    
    
    public static void main(String[] args) {
        Solution1646 solution1646 = new Solution1646();
        System.out.println(solution1646.getMaximumGenerated(10));
    }
}