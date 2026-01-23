class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();

        int top=0,buttom=r-1,left=0,right=c-1;

        vector<int> ans;
    while(top<=buttom && left<=right){
        for(int j=left; j<=right; j++){
            ans.push_back(matrix[top][j]);
            
        }
        top++;
        for(int i=top; i<=buttom; i++){
            ans.push_back(matrix[i][right]);
            
        }
        right--;
        if(top<=buttom){
            for(int j=right; j>=left; j--){
                ans.push_back(matrix[buttom][j]);
                
            }
            buttom--;
        }
        if(left<=right){
            for(int i=buttom; i>=top; i--){
                ans.push_back(matrix[i][left]);
                

            }
            left++;
        }
        
    }  
    return ans;

    }
};