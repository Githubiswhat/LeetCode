package QuestionBank.Solution001_100;

import com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIterNodeList;

import java.util.ArrayList;
import java.util.List;

/**
 * @author windows
 */
public class Solution93 {
    public List<String> restoreIpAddresses(String s) {
        ArrayList<String> res = new ArrayList<>();
        int[] segments = new int[4];
        restoreIpAddresses(s, 0, segments, res, 0);
        return res;
    }

    private void restoreIpAddresses(String s, int begin, int[] segments, List<String> res, int partition) {
        if (partition == 4){
            if (begin == s.length()) {
                StringBuilder sb = new StringBuilder();
                for (int i = 0; i < segments.length; i++) {
                    sb.append(segments[i]);
                    if (i != segments.length - 1){
                        sb.append('.');
                    }
                }
                res.add(sb.toString());
            }
            return;
        }

        if (s.length() == begin){
            return;
        }

        if (s.charAt(begin) == '0') {
            segments[partition] = 0;
            restoreIpAddresses(s, begin + 1, segments, res, partition + 1);
            return;
        }

        int addr = 0;
        for (int i = begin; i < s.length(); i++) {
            addr = addr * 10 + (s.charAt(i) - '0');
            if (addr <= 255){
                segments[partition] = addr;
                restoreIpAddresses(s, i + 1, segments, res, partition + 1);
            }else {
                break;
            }
        }
    }


    public static void main(String[] args) {
        Solution93 solution93 = new Solution93();
        solution93.restoreIpAddresses("25525511135");
    }
}