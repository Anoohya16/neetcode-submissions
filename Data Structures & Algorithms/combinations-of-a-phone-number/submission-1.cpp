class Solution {
public:
    vector<string> ans;
    vector<string> store={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void solve(string digits,int index,string curr){
        if(index==digits.size()){
            ans.push_back(curr);
            return;
        }
        string letters=store[digits[index]-'0'];
        for(char d:letters){
            solve(digits,index+1,curr+d);  
        }

    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0){
            return {};
        }
        solve(digits,0,"");
        return ans;
    }
};