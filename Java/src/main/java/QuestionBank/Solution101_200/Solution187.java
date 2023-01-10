package QuestionBank.Solution101_200;

import com.ibm.dtfj.javacore.parser.j9.section.nativememory.INativeMemoryTypes;

import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;

/**
 * @author windows
 */
public class Solution187 {

//    public List<String> findRepeatedDnaSequences(String s) {
//        HashMap<String, Integer> map = new HashMap<>();
//        ArrayList<String> res = new ArrayList<>();
//        for (int i = 0; i <= s.length() - 10; i++) {
//            String substring = s.substring(i, i + 10);
//            map.put(substring, map.getOrDefault(substring, 0) + 1);
//            if (map.get(substring) == 2){
//                res.add(substring);
//            }
//        }
//        return res;
//    }

    public List<String> findRepeatedDnaSequences(String s) {
        List<String> res = new ArrayList<>();
        HashMap<Character, Integer> hashMap = new HashMap<Character, Integer>() {{
            put('A', 0);
            put('C', 1);
            put('G', 2);
            put('T', 3);
        }};
        int L = 10;
        if (s.length() <= L) {
            return res;
        }
        int num = 0;
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < L - 1; i++) {
            num = (num << 2) | hashMap.get(s.charAt(i));
        }
        for (int i = 0; i <= s.length() - L; i++) {
            num = ((num << 2) | hashMap.get(s.charAt(i + L - 1))) & ((1 << (L * 2)) - 1);
            map.put(num, map.getOrDefault(num, 0) + 1);
            if (map.get(num) == 2){
                res.add(s.substring(i, i + L));
            }
        }
        return res;
    }


    public static void main(String[] args) {
        Solution187 solution187 = new Solution187();
    }
}