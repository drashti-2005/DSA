class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        for(auto x: mp){
            if(x.second>1){
                return x.first;
            }
        }
        return 0;
    }
};