package QuestionBank.Solution1401_1500;

import java.util.HashMap;

/**
 * @author windows
 */
public class Solution1460 {
    public boolean canBeEqual(int[] target, int[] arr) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < target.length; i++) {
            map.put(target[i], map.getOrDefault(target[i], 0) + 1);
        }
        for (int i = 0; i < arr.length; i++) {
            if (!map.containsKey(arr[i]) || map.get(arr[i]) < 1){
                return false;
            }else{
                map.put(arr[i], map.get(arr[i]) - 1);
            }
        }
        return true;
    }
    
    
    public static void main(String[] args) {
        Solution1460 solution1460 = new Solution1460();
    }
}