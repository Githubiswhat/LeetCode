package Solution801_900;

/**
 * @author windows
 */
public class Solution832 {
    public int[][] flipAndInvertImage(int[][] image) {
        for (int i = 0; i < image.length; i++) {
            for (int j = 0, k = image[i].length - 1; j < k; j++, k--) {
                int temp = image[i][j];
                image[i][j] = image[i][k];
                image[i][k] = temp;
            }
            for (int j = 0; j < image[i].length; j++) {
                if (image[i][j] == 0){
                    image[i][j] = 1;
                }else{
                    image[i][j] = 0;
                }
            }
        }
        return image;
    }


    public static void main(String[] args) {
        Solution832 solution832 = new Solution832();
    }
}