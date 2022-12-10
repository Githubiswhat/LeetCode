package QuestionBank.Solution1501_1600;
/**
 * @author windows
 */
public class Solution1550 {
    public boolean threeConsecutiveOdds(int[] arr) {
        int count = 0 ;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] % 2 != 0){
                count++;
                if (count >= 3){
                    return true;
                }
            }else{
                count = 0;
            }
        }
        return false;
    }
    
    
    public static void main(String[] args) {
        Solution1550 solution1550 = new Solution1550();
    }
}