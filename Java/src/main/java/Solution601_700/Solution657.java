package Solution601_700;

/**
 * @author windows
 */
public class Solution657 {
    public boolean judgeCircle(String moves) {
        int[] UDLR = new int[4];
        for (int i = 0; i < moves.length(); i++) {
            if (moves.charAt(i) == 'U'){
                UDLR[0]++;
            }else if (moves.charAt(i) == 'D'){
                UDLR[1]++;
            }else if (moves.charAt(i) == 'L') {
                UDLR[2]++;
            }else{
                UDLR[3]++;
            }
        }
        return UDLR[0] == UDLR[1] && UDLR[2] == UDLR[3];
    }


    public static void main(String[] args) {
        Solution657 solution657 = new Solution657();
    }
}