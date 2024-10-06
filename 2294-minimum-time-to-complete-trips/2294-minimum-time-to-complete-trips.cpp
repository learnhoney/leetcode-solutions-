class Solution {
public:
    long long minimumTime(vector<int>& time, int total) {
        long long low = 0;
        long  long high = 1LL * time[0] * total;
        while(low < high){
            long long mid = (low + high) / 2;
            long long trips = 0;
            for(auto it : time){
                trips += (mid / it);
            }
            if(trips < total) low = mid + 1;
            else high = mid;
            
        }
        return low;
    }
};