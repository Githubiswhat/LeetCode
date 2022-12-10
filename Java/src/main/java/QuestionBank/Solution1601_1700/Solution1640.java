package QuestionBank.Solution1601_1700;
/**
 * @author windows
 */
public class Solution1640 {
    public boolean canFormArray(int[] arr, int[][] pieces) {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < arr.length; i++) {
            sb.append(arr[i]);
        }
        String str = sb.toString();
        sb = new StringBuilder();
        for (int i = 0; i < pieces.length; i++) {
            if (pieces[i].length > 1) {
                StringBuilder stringBuilder = new StringBuilder();
                for (int j = 0; j < pieces[i].length; j++) {
                    stringBuilder.append(pieces[i][j]);
                }
                if (str.indexOf(stringBuilder.toString()) == -1) {
                    return false;
                }
                sb.append(stringBuilder.toString());
            }else{
                sb.append(pieces[i][0]);
            }
        }
        return sb.toString().length() == str.length();
    }
    
    
    public static void main(String[] args) {
        Solution1640 solution1640 = new Solution1640();
        System.out.println(solution1640.canFormArray(new int[]{91, 4, 64, 78}, new int[][]{{78}, {4, 64}, {91}}));
    }
}