class Solution {
public:
    bool isvowel(char c){
        c = tolower(c);
        return c=='a'||c=='e'||c=='o'||c=='u'||c=='i';
    }
    string reverseVowels(string s) {
        
        int left = 0 ; 
        int right = s.size()-1;
        while(left<right){
            while(left<right && !isvowel(s[left])) left++;
            while(left<right && !isvowel(s[right])) right--;

            swap(s[left], s[right]);
            left++;
            right--;
        }
        return s;
    }
};