class Solution {
public:
    int countVowelSubstrings(string word) {
        int n = word.size();

        unordered_set<char> s = {'a', 'e', 'i', 'o', 'u'};
        int c = 0;

        for (int i = 0; i < n; i++) {
            unordered_set<char> uv;
            for (int j = i; j < n; j++) {
                if (s.find(word[j]) == s.end()) {
                    break;
                }
                uv.insert(word[j]);
                if (uv.size() == 5) {
                    c++;
                }
            }
        }
        return c;
    }
};