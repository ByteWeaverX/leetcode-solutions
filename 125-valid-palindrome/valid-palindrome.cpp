class Solution {
private:
    bool valid(char ch){
        if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9'){
            return 1;
        }
        else return 0;
    }
    char toLowerCase(char ch){
        if(ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9'){
            return ch;
        }
        else{
            char temp = ch - 'A' + 'a';
            return temp; 
        }
    }    
public:
    bool isPalindrome(string s) {
        string temp ="";
        for(int j=0;j<s.length();j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
        }
        for(int j=0;j<temp.length();j++){
            temp[j]=toLowerCase(temp[j]);
        }
        int st=0; int e=temp.length()-1;
        while(st<e){
        if(temp[st] != temp[e]) return false;
            st++;
            e--; 
        }
        return true;

        
    }
};