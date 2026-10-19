class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count = 0;
        vector<bool> counted(26, false);   // to avoid duplicates
        
        for(int i = 0; i < word.length(); i++) {
            for(int j = i + 1; j < word.length(); j++) {

                if(abs(word[i] - word[j]) == 32) {
                    
                    char lower = tolower(word[i]);  
                    int index = lower - 'a';

                    if(!counted[index]) {
                        count++;
                        counted[index] = true;
                    }
                }
            }
        }

        return count;
    }
};
