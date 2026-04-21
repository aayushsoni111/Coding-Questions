class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        if (word1.empty()) {
            return word2;
        }
        if (word2.empty()) {
            return word1;
        }
        string wordResult;
        size_t i = 0, w1Size = word1.size(), w2Size=word2.size();
        while (i < max(w1Size, w2Size)) {
            if(i<w1Size){
                wordResult.push_back(word1[i]);
            }
            if(i<w2Size){
                wordResult.push_back(word2[i]);
            }
            i++;
        }
        return wordResult;
    }
};
