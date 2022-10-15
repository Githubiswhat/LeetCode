package Solution1501_1600;    
/**
 * @author windows
 */
public class Solution1566 {
    public boolean containsPattern(int[] arr, int m, int k) {
        StringBuilder sb = new StringBuilder(arr.length);
        for (int i = 0; i < arr.length; i++) {
            sb.append(arr[i]);
        }
        String str = sb.toString();
        for (int i = 0; i < str.length() - m; i++) {
            String s = str.substring(i, i + m);
            String temp = "";
            for (int j = 0; j < k; j++) {
                temp += s;
            }
            if (str.indexOf(temp) != -1) {
                return true;
            }
        }
        return false;
    }
    
    
    public static void main(String[] args) {
        Solution1566 solution1566 = new Solution1566();
        System.out.println(solution1566.containsPattern(new int[]{1, 2, 1, 2, 1, 3}, 2, 3));
    }
}