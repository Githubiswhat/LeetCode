package Solution701_800;

/**
 * @author windows
 */
public class Solution717 {
    public boolean isOneBitCharacter(int[] bits) {
        if (bits.length == 1){
            return true;
        }
        if (bits[bits.length - 1] != 0){
            return false;
        }

        return false;
    }


    public static void main(String[] args) {
        Solution717 solution717 = new Solution717();
    }
}