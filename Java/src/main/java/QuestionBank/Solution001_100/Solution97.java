package QuestionBank.Solution001_100;

/**
 * @author windows
 */
public class Solution97 {
    public boolean isInterleave(String s1, String s2, String s3) {
        int n1 = s1.length();
        int n2 = s2.length();
        int n3 = s3.length();
        if (n3 != n1 + n2){
            return false;
        }
        char[] c1 = s1.toCharArray();
        char[] c2 = s2.toCharArray();
        char[] c3 = s3.toCharArray();

        int left1 = 0;
        int left2 = 0;
        int left3 = 0;

        while(left3 < n3){

        }

        return true;

    }


    public static void main(String[] args) {
        Solution97 solution97 = new Solution97();
    }
}