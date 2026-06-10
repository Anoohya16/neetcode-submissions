class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string front=strs[0];
        string end=strs[n-1];
        int i=0;
        while(i<front.size()&& end.size() && front[i]==end[i]){
            i++;
        }
        return front.substr(0,i);
    }
};