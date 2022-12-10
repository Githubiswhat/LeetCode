package QuestionBank.Solution601_700;

/**
 * @author windows
 */
public class Solution661 {
    public int[][] imageSmoother(int[][] img) {
        int[][] res = new int[img.length][img[0].length];
        for (int i = 0; i < img.length; i++) {
            for (int j = 0; j < img[i].length; j++) {
                int sum = img[i][j];
                int count = 1;
                if (i - 1 >= 0 && j - 1 >= 0){
                    sum += img[i - 1][j - 1] + img[i - 1][j] + img[i][j - 1];
                    count += 3;
                }
                if (i - 1 >= 0 && j + 1 < img[i].length){
                    sum += img[i - 1][j + 1] + img[i][j + 1];
                    count += 2;
                }
                if (i + 1 < img.length && j - 1 >= 0){
                    sum += img[i + 1][j - 1] + img[i + 1][j];
                    count += 2;
                }
                if(i + 1 < img.length && j + 1 < img[i].length){
                    sum += img[i + 1][j + 1];
                    count += 1;
                }
                res[i][j] = sum / count;
            }
        }
        return res;
    }


    public static void main(String[] args) {
        Solution661 solution661 = new Solution661();
    }
}