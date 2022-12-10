package QuestionBank.Solution1101_1200;
/**
 * @author windows
 */
public class Solution1184 {
    public int distanceBetweenBusStops(int[] distance, int start, int destination) {
        int valueA = 0;
        if (start > destination){
            int temp = start;
            start = destination;
            destination = temp;
        }
        for (int i = start; i < destination; i++) {
            valueA += distance[i];
        }
        int valueB = 0;
        for (int i = start - 1; i >= 0; i--) {
            valueB += distance[i];
        }
        for (int i = destination; i < distance.length; i++) {
            valueB += distance[i];
        }
        return valueA > valueB ? valueB : valueA;
    }
    
    
    public static void main(String[] args) {
        Solution1184 solution1184 = new Solution1184();
        System.out.println(solution1184.distanceBetweenBusStops(new int[]{7,10,1,12,11,14,5,0}, 7, 2));
    }
}