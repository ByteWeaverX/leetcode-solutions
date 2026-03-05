class Solution {
public:
    bool detectCapitalUse(string word) {
        int capital = 0 ;
        for(char c : word){
            if(isupper(c)) capital++;
        }
        int n = word.size();
        if(n==capital) return true;
        if(capital==0) return true;
        if(capital == 1 && isupper(word[0])) return true;

        return false;
    }
};