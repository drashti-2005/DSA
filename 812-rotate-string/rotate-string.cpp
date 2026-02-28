class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal)
            return true;
        for(int i=1; i<s.length(); i++){
            
            rotate(s.begin(),s.begin()+i,s.end());
            if(s==goal){
                return true;
            }
            rotate(s.begin(), s.end()-i, s.end());
        }
        return false;
    }
};