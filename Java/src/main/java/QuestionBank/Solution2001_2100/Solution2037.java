package QuestionBank.Solution2001_2100;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution2037 {
    public int minMovesToSeat(int[] seats, int[] students) {
        int sum = 0;
        Arrays.sort(seats);
        Arrays.sort(students);
        for (int i = 0; i < students.length; i++) {
            sum += Math.abs(students[i] - seats[i]);

        }
        return sum;
    }


    public static void main(String[] args) {
        Solution2037 solution2037 = new Solution2037();
    }
}