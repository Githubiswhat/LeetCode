package Solution1201_1300;    
/**
 * @author windows
 */
public class Solution1287 {
    public int findSpecialInteger(int[] arr) {
        int count = 1;
        for (int i = 1; i < arr.length; i++){
            if (arr[i] == arr[i - 1]){
                count++;
                if (count > arr.length / 4){
                    return arr[i];
                }
            }else{
                count = 1;
            }
        }
        return arr[0];
    }
    
    
    public static void main(String[] args) {
        Solution1287 solution1287 = new Solution1287();
    }
}