package QuestionBank.Solution1401_1500;
/**
 * @author windows
 */
public class Solution1450 {
    public int busyStudent(int[] startTime, int[] endTime, int queryTime) {
        int count = 0;
        for (int i = 0; i < startTime.length; i++){
            if (startTime[i] <= queryTime){
                count++;
            }
        }
        for (int i = 0; i < endTime.length; i++){
            if (endTime[i] < queryTime){
                count--;
            }
        }
        return count;
    }
    
    
    public static void main(String[] args) {
        Solution1450 solution1450 = new Solution1450();
    }
}