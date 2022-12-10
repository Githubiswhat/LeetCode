package QuestionBank.Solution1001_1100;
/**
 * @author windows
 */
public class Solution1013 {
    public boolean canThreePartsEqualSum(int[] arr) {
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }
        if (sum % 3 != 0){
            return false;
        }
        int count = 0;
        int sumTemp = 0;
        for (int i = 0; i < arr.length; i++) {
            sumTemp += arr[i];
            if (sumTemp == sum / 3){
                count++;
                sumTemp = 0;
            }
        }
        if (sum == 0){
            return count >= 2;
        }
        return count == 3;
    }
    
    
    public static void main(String[] args) {
        Solution1013 solution1013 = new Solution1013();
    }
}