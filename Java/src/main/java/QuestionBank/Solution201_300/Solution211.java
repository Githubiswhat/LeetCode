package QuestionBank.Solution201_300;

/**
 * @author windows
 */
public class Solution211 {
    static class WordDictionary {
        private WordDictionary[] children;

        private boolean isEnd;

        public WordDictionary() {
            children = new WordDictionary[26];
        }

        public void addWord(String word) {
            WordDictionary node = this;
            for (int i = 0; i < word.length(); i++) {
                int index = word.charAt(i) - 'a';
                if (node.children[index] == null) {
                    node.children[index] = new WordDictionary();
                }
                node = node.children[index];
            }
            node.isEnd = true;
        }

        public boolean search(String word) {
            return search(word, 0, this);
        }

        private boolean search(String word, int begin, WordDictionary node) {
            for (int i = begin; i < word.length(); i++) {
                if (word.charAt(i) == '.'){
                    for (int j = 0; j < 26; j++) {
                        if (node.children[j] != null){
                            boolean find = search(word, i + 1, node.children[j]);
                            if (find) {
                                return true;
                            }
                        }
                    }
                    return false;
                }else{
                    int index = word.charAt(i) - 'a';
                    if (node.children[index] == null) {
                        return false;
                    }
                    node = node.children[index];
                }
            }
            if (node.isEnd){
                return true;
            }else{
                return false;
            }
        }
    }


    public static void main(String[] args) {
        WordDictionary wordDictionary = new WordDictionary();
        wordDictionary.addWord("bad");
        wordDictionary.addWord("dad");
        wordDictionary.addWord("mad");
        System.out.println(wordDictionary.search("b.."));
    }
}