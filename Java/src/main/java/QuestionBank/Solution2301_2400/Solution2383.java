package QuestionBank.Solution2301_2400;
/**
 * @author windows
 */
public class Solution2383 {
    public int minNumberOfHours(int initialEnergy, int initialExperience, int[] energy, int[] experience) {
        int sum = 0;
        for (int i = 0; i < experience.length; i++) {
            if (energy[i] >= initialEnergy){
                sum += energy[i] - initialEnergy + 1;
                initialEnergy = 1;
            }else{
                initialEnergy -= energy[i];
            }
            if(experience[i] >= initialExperience){
                sum += experience[i] - initialExperience + 1;
                initialExperience = initialExperience + experience[i] - initialExperience + 1;
            }
            initialExperience += experience[i];
        }
        return sum;
    }
    
    
    public static void main(String[] args) {
        Solution2383 solution2383 = new Solution2383();
        System.out.println(solution2383.minNumberOfHours(1, 1, new int[]{1, 1, 1, 1}, new int[]{1, 1, 1, 50}));
    }
}