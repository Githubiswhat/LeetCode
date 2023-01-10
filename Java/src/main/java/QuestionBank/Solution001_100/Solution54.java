package QuestionBank.Solution001_100;

import java.util.ArrayList;
import java.util.List;

/**
 * @author windows
 */
public class Solution54 {
    public List<Integer> spiralOrder(int[][] matrix) {
        int l = 0, r = matrix[0].length - 1;
        int t = 0, b = matrix.length - 1;
        int n = matrix.length * matrix[0].length;
        ArrayList<Integer> res = new ArrayList<>();
        while(res.size() < n){
            for (int j = l; j <= r; j++) {
                res.add(matrix[t][j]);
            }
            if (++t > b){
                break;
            }
            for (int j = t; j <= b; j++) {
                res.add(matrix[j][r]);
            }
            if (--r < l){
                break;
            }
            for (int j = r; j >= l; j--) {
                res.add(matrix[b][j]);
            }
            if (--b < t){
                break;
            }
            for (int j = b; j >= t; j--) {
                res.add(matrix[j][l]);
            }
            if (++l > r){
                break;
            }
        }
        return res;
    }


    public static void main(String[] args) {
        Solution54 solution54 = new Solution54();
        solution54.spiralOrder(new int[][]{{1,2,3,4},{5,6,7,8},{9,10,11,12}});
    }
}