class Solution {
public:
    int maxDepth(string s) {
        int max=0, count=0,index=0;

        for(int i=0; i<s.length(); i++){
            if(s[i]=='('){
                count++;
            }
            if(s[i]==')'){
                count--;
            }
            if(max<=count){
                max=count;
            }
        }
        return max;
    }
};