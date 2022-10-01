package Solution401_500;

/**
 * @author windows
 */
public class Solution495 {
    public int findPoisonedDuration(int[] timeSeries, int duration) {
        int count = 0;
        for (int i = 0; i < timeSeries.length - 1; i++) {
            if (timeSeries[i] - timeSeries[i + 1] < duration){
                count += timeSeries[i + 1] - timeSeries[i];
            }else{
                count += duration;
            }
        }
        return count + duration;
    }


    public static void main(String[] args) {
        Solution495 solution495 = new Solution495();
    }
}