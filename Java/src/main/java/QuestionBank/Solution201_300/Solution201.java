package QuestionBank.Solution201_300;

/**
 * @author windows
 */
public class Solution201 {
    public int rangeBitwiseAnd(int left, int right) {
        int shift = 0;
        while (left < right) {
            left = left >> 1;
            right = right >> 1;
            shift++;
        }
        return left << shift;
    }


    public static void main(String[] args) {
        Solution201 solution201 = new Solution201();
    }
}