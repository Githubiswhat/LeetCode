package Solution1401_1500;

import java.util.HashSet;
import java.util.List;

/**
 * @author windows
 */
public class Solution1436 {
    public String destCity(List<List<String>> paths) {
        HashSet<String> set = new HashSet<>();
        for (int i = 0; i < paths.size(); i++) {
            set.add(paths.get(i).get(0));
        }
        for (int i = 0; i < paths.size(); i++) {
            if (!set.contains(paths.get(i).get(1))){
                return paths.get(i).get(1);
            }
        }
        return null;
    }
    
    
    public static void main(String[] args) {
        Solution1436 solution1436 = new Solution1436();
    }
}