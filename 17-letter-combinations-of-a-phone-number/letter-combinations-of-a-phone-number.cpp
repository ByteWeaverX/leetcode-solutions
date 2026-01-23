class Solution {
private:
void solve(string digits, string mapping[], vector<string>& ans, string output, int index){
    if(index>=digits.size()){
        ans.push_back(output);
        return;
    }
    int number = digits[index]-'0';
    string value = mapping[number];
    for(int i = 0; i<value.size();i++){
        output.push_back(value[i]);
        solve(digits,mapping,ans,output,index+1);
        output.pop_back();
    }
}
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output;
        if(digits.size()==0) return ans;
        int index=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,mapping,ans,output,index);
        return ans;

    }
};