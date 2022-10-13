package Solution901_1000;


/**
 * @author windows
 */
public class Solution925 {
    public boolean isLongPressedName(String name, String typed) {
        int i = 0;
        int j = 0;
        for (; i < name.length(); i++) {
            if (j == typed.length()){
                return false;
            }
            for (; j < typed.length(); j++) {
                if(name.charAt(i) == typed.charAt(j)){
                    j++;
                    break;
                }
            }
        }
        if (j != typed.length()){
            char ch = typed.charAt(j - 1);
            for (int k = j; k < typed.length(); k++) {
                if (typed.charAt(k) != ch){
                    return false;
                }
            }
        }
        return name.charAt(--i) == typed.charAt(--j);
    }



    public static void main(String[] args) {
        Solution925 solution925 = new Solution925();
    }
}