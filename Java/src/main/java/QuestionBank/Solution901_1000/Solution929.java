package QuestionBank.Solution901_1000;

import java.util.HashSet;


/**
 * @author windows
 */
public class Solution929 {
    public int numUniqueEmails(String[] emails) {
        HashSet<String> set = new HashSet<>();
        for (int i = 0; i < emails.length; i++) {
            int indexPlus = emails[i].indexOf('+');
            String str = "";
            int indexAt = emails[i].indexOf('@');
            if (indexPlus != -1) {
                str = emails[i].substring(0, indexPlus) + emails[i].substring(indexAt, emails[i].length());
                emails[i] = str;
            }
            int indexDot = emails[i].indexOf('.');
            indexAt = emails[i].indexOf('@');
            while (indexDot != -1 && indexDot < indexAt){
                emails[i] = emails[i].replaceFirst("[.]", "");
                indexDot = emails[i].indexOf('.');
                indexAt = emails[i].indexOf('@');
            }
            set.add(emails[i]);
        }
        return set.size();
    }


    public static void main(String[] args) {
        Solution929 solution929 = new Solution929();
        System.out.println(solution929.numUniqueEmails(new String[]{"fg.r.u.uzj+o.pw@kziczvh.com","r.cyo.g+d.h+b.ja@tgsg.z.com","fg.r.u.uzj+o.f.d@kziczvh.com","r.cyo.g+ng.r.iq@tgsg.z.com","fg.r.u.uzj+lp.k@kziczvh.com","r.cyo.g+n.h.e+n.g@tgsg.z.com","fg.r.u.uzj+k+p.j@kziczvh.com","fg.r.u.uzj+w.y+b@kziczvh.com","r.cyo.g+x+d.c+f.t@tgsg.z.com","r.cyo.g+x+t.y.l.i@tgsg.z.com","r.cyo.g+brxxi@tgsg.z.com","r.cyo.g+z+dr.k.u@tgsg.z.com","r.cyo.g+d+l.c.n+g@tgsg.z.com","fg.r.u.uzj+vq.o@kziczvh.com","fg.r.u.uzj+uzq@kziczvh.com","fg.r.u.uzj+mvz@kziczvh.com","fg.r.u.uzj+taj@kziczvh.com","fg.r.u.uzj+fek@kziczvh.com"}));
    }
}