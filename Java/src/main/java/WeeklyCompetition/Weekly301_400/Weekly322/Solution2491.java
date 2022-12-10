package WeeklyCompetition.Weekly301_400.Weekly322;

import java.util.Arrays;

/**
 * @author windows
 */
public class Solution2491 {
    public long dividePlayers(int[] skill) {
        if (skill.length == 2){
            return skill[0] * skill[1];
        }
        Arrays.sort(skill);
        int n = skill.length;
        long sum = skill[0] + skill[n - 1];
        long res = 0;
        for (int i = 0; i < skill.length / 2; i++) {
            if (skill[i] + skill[n - i - 1] != sum){
                return -1;
            }else{
                res += skill[i] * skill[n - i - 1];
            }
        }
        return res;
    }
}
