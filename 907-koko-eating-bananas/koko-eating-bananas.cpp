    class Solution {
    public:
        int minEatingSpeed(vector<int>& piles, int h) {
            int l=1;
            int r = piles[0];
            for (int p : piles) {
                r = max(r, p);
            }

            while(l<=r){
                int mid=l+(r-l)/2;
                long long totalhrs=CTH(piles,mid);
                if(totalhrs<=h){
                    r=mid-1;
                }else{
                    l=mid+1;
                }   

            }
            return l;
        }

        long long CTH(vector<int>& piles, int k){
            long long totalH=0;
            
            for (int p : piles) {
                totalH += (p + k - 1) / k;  
            }
            return totalH;
        }
    };