class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(char ch:s){
            if(isalnum(ch)){
                ans+=tolower(ch);
            }
        }
        int n=ans.length();
       for(int i=0; i<n/2; i++){
            if(ans[i]!=ans[n-i-1]){
                return false;
            }
       } 
       return true;
    }
};