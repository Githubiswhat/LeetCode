package QuestionBank.Solution001_100;

/**
 * @author windows
 */
public class Solution96 {
    public int numTrees(int n) {
        if (n < 1){
            return 0;
        }
        if (n == 1){
            return 1;
        }
        int[] df = new int[n + 1];
        df[0] = 0;
        df[1] = 1;
        for (int i = 2; i <= n; i++) {
            int count = 0;
            for (int j = 1; j <= i; j++) {
                int left = j - 1;
                int right = i - j;
                if (df[left] == 0){
                    count += df[right];
                }else if (df[right] == 0){
                    count += df[left];
                }else{
                    count += df[left] * df[right];
                }
            }
            df[i] = count;
        }
        return df[n];
    }






    public static void main(String[] args) {
        Solution96 solution96 = new Solution96();
        System.out.println(solution96.numTrees(4));
    }
}