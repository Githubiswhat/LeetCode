package Solution201_300;

/**
 * @author windows
 */
public class Solution263 {
    public boolean isUgly(int n) {
        while(n != 1){
            if (n % 2 == 0){
                n /= 2;
            }else if (n % 3 == 0){
                n /= 3;
            }else if (n % 5 == 0){
                n /= 5;
            }else {
                return false;
            }
        }
        return true;
    }


    public static void main(String[] args) {
        Solution263 solution263 = new Solution263();
    }
}