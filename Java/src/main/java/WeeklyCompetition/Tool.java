package WeeklyCompetition;

import java.io.File;

/**
 * @author windows
 */
public class Tool {
    public static void main(String[] args) {
        for (int i = 201; i <= 300; i++) {
            String path = "src/main/java/WeeklyCompetition/Weekly201_300/Weekly%d";
            path = String.format(path, i);
            File file = new File(path);
            if (!file.exists()){
                file.mkdirs();
            }
        }
    }
}
