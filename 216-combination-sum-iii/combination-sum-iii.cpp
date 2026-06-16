class Solution {
public:
    vector<vector<int>> ans;

    void solve(int start, int k, int target,
               vector<int>& curr) {

        if (target == 0 && k == 0) {
            ans.push_back(curr);
            return;
        }

        if (target < 0 || k < 0)
            return;

        for (int i = start; i <= 9; i++) {

            curr.push_back(i);

            solve(i + 1, k - 1, target - i, curr);

            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
         vector<int> curr;

        solve(1, k, n, curr);

        return ans;
    
    }
};