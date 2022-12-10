package QuestionBank.Solution601_700;

/**
 * @author windows
 */
public class Solution605 {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
        for (int i = 0, len = flowerbed.length; i < len && n > 0;) {
            if (flowerbed[i] == 1) {
                i += 2;
            } else if (i == flowerbed.length - 1 || flowerbed[i + 1] == 0) {
                n--;
                i += 2;
            } else {
                i += 3;
            }
        }
        return n <= 0;
    }

    public static void main(String[] args) {
        Solution605 solution605 = new Solution605();
        System.out.println(solution605.canPlaceFlowers(new int[]{1,0,0,0,1,0,0}, 2));
    }
}