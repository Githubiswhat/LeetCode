package Solution1101_1200;    
/**
 * @author windows
 */
public class Solution1108 {
    public String defangIPaddr(String address) {
        return address.replace("\\.", "[.]");
    }
    
    
    public static void main(String[] args) {
        Solution1108 solution1108 = new Solution1108();
    }
}