class Solution {
public:
    int days(vector<int>& weights, int cap){
        int day=1, load=0;
        for(int i: weights){
            if(load+i>cap){
                load=i;
                day++;
            }else{
                load+=i;
            }
        }
        return day;
    }

    int shipWithinDays(vector<int>& weights, int d) {
        int low= *max_element(weights.begin(), weights.end());
        int high= accumulate(weights.begin(), weights.end(),0);
        while(low<high){
            int mid=(low+high)/2;
            if(days(weights, mid)>d){
                low=mid+1;
            }else{
                high=mid;
            }
        }
        return low;
    }
};