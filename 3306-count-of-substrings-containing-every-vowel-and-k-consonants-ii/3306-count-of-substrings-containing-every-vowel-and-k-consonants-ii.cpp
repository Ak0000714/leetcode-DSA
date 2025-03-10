class Solution {
public:
    bool isVowel(char ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }
    long long countOfSubstrings(string word, int k) {
        int n = word.length();
        unordered_map<int, int> next;
        int last = n;
        for (int i = word.length() - 1; i >= 0; i--) {
            next[i] = last;
            if (!isVowel(word[i])) {
                last = i;
            }
        }
        int i = 0, j = 0;
        long long ans = 0;
        unordered_map<char, int> vowels;
        int cons = 0;
        while (j < n) {
            char ch = word[j];
            if (isVowel(ch)) {
                vowels[ch]++;
            } else {
                cons++;
            }

            //now check for invalid substrings
            while(i<n && cons > k){
                if(isVowel(word[i])){
                    vowels[word[i]]--;
                    if(vowels[word[i]]==0){
                        vowels.erase(word[i]);
                    }
                } else{
                    cons--;
                }
                i++;
            }

            //valid substring
            while(i<n && cons == k && vowels.size()==5){
                ans += (next[j]-j);
                char ch = word[i];
                if(isVowel(ch)){
                    vowels[ch]--;
                    if(vowels[ch]==0){
                        vowels.erase(ch);
                    }
                }
                else{
                    cons--;
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};