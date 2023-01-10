package QuestionBank.Solution101_200;

/**
 * @author windows
 */
public class Solution165 {
    public int compareVersion(String version1, String version2) {
        String[] split1 = version1.split("\\.");
        String[] split2 = version2.split("\\.");
        int minLen = Math.min(split1.length, split2.length);
        for (int i = 0; i < minLen; i++) {
            int a = Integer.parseInt(split1[i]);
            int b = Integer.parseInt(split2[i]);
            if (a < b){
                return  -1;
            }else if (a > b){
                return 1;
            }
        }
        if (split1.length < split2.length){
            for (int i = minLen; i < split2.length; i++) {
                if (Integer.parseInt(split2[i]) > 0){
                    return -1;
                }
            }
        }else{
            for (int i = minLen; i < split1.length; i++) {
                if (Integer.parseInt(split1[i]) > 0){
                    return 1;
                }
            }
        }
        return 0;
    }


    public static void main(String[] args) {
        Solution165 solution165 = new Solution165();
        System.out.println(solution165.compareVersion("1.01", "1.001"));
    }
}