class Solution {
public:
    string mergeAlternately(string word1, string word2) {    
    int m=word1.length();
        int n=word2.length();
        int i=0,j=0;
        bool check=true;
        string word="";
        while(i<m && j<n){
            if(check){
                word+=word1[i++];
                check=false;
            }else{
                word+=word2[j++];
                check=true;
            }
        }
        while(i<m){
            word+=word1[i++];
        }
        while(j<n){
            word+=word2[j++];
        }
        return word;
    }
};