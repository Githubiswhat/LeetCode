package QuestionBank.Solution701_800;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution733 {
    public int[][] floodFill(int[][] image, int sr, int sc, int color) {
        boolean[][] used = new boolean[image.length][image[0].length];
        floodFill(image, sr, sc, color, image[sr][sc], used);
        return image;
    }

    private void floodFill(int[][] image, int sr, int sc, int color, int target, boolean[][] used) {
        if (sr >= 0 && sr < image.length && sc >= 0 && sc < image[0].length) {
            if (image[sr][sc] == target && used[sr][sc] == false) {
                image[sr][sc] = color;
                used[sr][sc] = true;
                floodFill(image, sr, sc + 1, color, target, used);
                floodFill(image, sr, sc - 1, color, target, used);
                floodFill(image, sr + 1, sc, color, target, used);
                floodFill(image, sr - 1, sc, color, target, used);
            }
        }
    }


    public static void main(String[] args) {
        Solution733 solution733 = new Solution733();
        int[][] image = new int[][]{{0, 0, 0}, {1, 0, 0}};
        System.out.println(Arrays.deepToString(solution733.floodFill(image, 1, 0, 2)));
    }
}