class Solution {
public:
    vector<string>ans;
    bool isValid(string s){
        int sum=0;
        for(char c:s){
            if(c=='('){
                sum++;
            }else{
                sum--;
            }
            if(sum<0){
                return false;
            }
        }
        return sum==0;
    }
    void solve(string curr,int open,int close,int n){
        if(curr.size()==2*n){
            if(isValid(curr)){
                ans.push_back(curr);
            }
            return;
        }
        if(open<n){
            solve(curr+"(",open+1,close,n);
        }
        if(close<open){
            solve(curr+")",open,close+1,n);
        }
    }
    vector<string> generateParenthesis(int n) {
        solve("",0,0,n);
        return ans;
    }
};
