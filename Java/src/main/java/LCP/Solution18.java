package LCP;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution18 {
    public int breakfastNumber(int[] staple, int[] drinks, int x) {
        int count = 0;
        Arrays.sort(staple);
        Arrays.sort(drinks);
        for (int i = 0; i < staple.length; i++) {
            if (staple[i] >= x){
                break;
            }
            int sub = x - staple[i];
            for (int j = 0; j < drinks.length; j++) {
                if (drinks[j] <= sub){
                    count++;
                }else{
                    break;
                }
            }
        }
        return count % 1000000007;
    }
    
    
    public static void main(String[] args) {
        Solution18 solution18 = new Solution18();
    }
}