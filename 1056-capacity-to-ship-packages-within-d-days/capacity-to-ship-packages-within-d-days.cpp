class Solution {
public:
    int finddays(vector<int>& weights, int cap) {
        int days=1,load=0;
        for(int i=0; i<weights.size(); i++){
            if(load+weights[i]>cap){
                days++;
                load=weights[i];
            }else{
                load+=weights[i];
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int low=*max_element(weights.begin(),weights.end());
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=weights[i];
        }
        int high=sum;

        while(low<=high){
            int mid=low+(high-low)/2;
            int NOD = finddays(weights,mid);
            if(NOD<=days){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
    

};