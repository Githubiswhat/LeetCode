package QuestionBank.Solution101_200;

import javax.naming.spi.ObjectFactory;

/**
 * @author windows
 */
public class Solution134 {

    public int canCompleteCircuit(int[] gas, int[] cost) {
        int i = 0;
        int n = gas.length;
        while (i < n){
            int gasSum = 0 ;
            int costSum = 0;
            int count = 0;
            int current = i;
            while (count < n){
                gasSum += gas[current];
                costSum += cost[current];
                if (gasSum < costSum){
                    break;
                }
                count++;
                current = (i + count) % n;
            }
            if (count == n){
                return i;
            }else{
                i = i + count + 1;
            }
        }
        return -1;
    }


    public static void main(String[] args) {
        Solution134 solution134 = new Solution134();
    }
}