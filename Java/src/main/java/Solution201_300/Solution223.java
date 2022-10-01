package Solution201_300;

/**
 * @author windows
 */
public class Solution223 {

    public static void main(String[] args) {
        Solution223 solution223 = new Solution223();
//        int result = solution223.computeArea(-3, 0, 3, 4, 0, -1, 9, 2);
//        int result = solution223.computeArea(0, 0 ,0 ,0, -1, -1, 1, 1);
//        int result = solution223.computeArea(-2, -2, 2, 2, -1, -1, 1, 1);
        int result = solution223.computeArea(-2, -2, 2, 2, -3, -3, 3, -1);
        System.out.println(result);
    }

    public int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int square1 = Math.abs(ax2 - ax1) * Math.abs(ay1 - ay2);
        int square2 = Math.abs(bx2 - bx1) * Math.abs(by2 - by1);
        if (ax1 >= bx1 && ay1 >= by1 && ax2 <= bx2 && ay2 <= by2) {
            return square2;
        }
        if (bx1 >= ax1 && by1 >= ay1 && bx2 <= ax2 && by2 <= ay2) {
            return square1;
        }
        // 右下 （ax2, ay1)            左上 （bx1, by2)
        // 左上 （ax1, ay2)            右下 （bx2, by1)
        // 右上 （ax2, ay2)            左下 （bx1, by1)
        // 左下 （ax1, ay1)            右上 （bx2, by2)
        int coverSquare = 0;
        if (ax2 >= bx1 && ax2 <= bx2 && ay1 >= by1 && ay1 <= by2) {
            coverSquare = Math.abs(ax2 - bx1) * Math.abs(ay1 - by2);
        } else if (ax1 <= bx2 && ax1 >= bx1 && ay2 >= by1 && ay2 <= by2) {
            coverSquare = Math.abs(ax1 - bx2) * Math.abs(ay2 - by1);
        } else if (ax2 >= bx1 && ax2 <= bx2 && ay2 >= by1 && ay2 <= by2) {
            coverSquare = Math.abs(ax2 - bx1) * Math.abs(ay2 - by1);
        } else if (ax1 <= bx2 && ax1 >= bx1 && ay1 <= by2 && ay1 >= by1) {
            coverSquare = Math.abs(ax1 - bx2) * Math.abs(ay1 - bx2);
        }
        return square1 + square2 - coverSquare;
    }
}