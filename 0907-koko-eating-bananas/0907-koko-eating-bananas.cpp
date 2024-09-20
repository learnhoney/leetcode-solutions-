class Solution {
public:
    long long rate(vector<int>& piles, int hoursatmid){
        long long tothrs=0;
        for(double i: piles){
            tothrs+= ceil(i/hoursatmid);
        }
        return tothrs;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int maxi= *max_element(piles.begin(), piles.end());
        int low=1;
        int high=maxi;

        while(low<=high){
            int mid=(low+high)/2;

            if(rate(piles, mid)<=h){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};