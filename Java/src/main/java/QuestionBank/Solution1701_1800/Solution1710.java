package QuestionBank.Solution1701_1800;

import java.util.Arrays;
import java.util.Comparator;

/**
 * @author windows
 */
public class Solution1710 {
    public int maximumUnits(int[][] boxTypes, int truckSize) {
        Arrays.sort(boxTypes, new Comparator<int[]>() {
            @Override
            public int compare(int[] o1, int[] o2) {
                if (o1[1] == o2[1]){
                    return o2[0] - o1[0];
                }else{
                    return o2[1] - o1[1];
                }
            }
        });
        int sum = 0;
        for (int i = 0; i < boxTypes.length; i++) {
            if (boxTypes[i][0] < truckSize){
                sum += boxTypes[i][0] * boxTypes[i][1];
                truckSize -= boxTypes[i][0];
            }else {
                sum += truckSize * boxTypes[i][1];
                break;
            }
        }
        return sum;
    }
    
    
    public static void main(String[] args) {
        Solution1710 solution1710 = new Solution1710();
    }
}