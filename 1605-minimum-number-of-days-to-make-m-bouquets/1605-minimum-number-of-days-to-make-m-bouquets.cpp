class Solution {
public:
    int possible(vector<int>& bloomDay,int day,int m,int k){
        int cnt=0,bcnt=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                cnt++;
            }else{
                bcnt+=cnt/k;
                cnt=0;
            }
            
        }
        bcnt+=cnt/k;
        if(bcnt>=m) return 1;
        else return 0;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int low= *min_element(bloomDay.begin(), bloomDay.end());
        int high= *max_element(bloomDay.begin(), bloomDay.end());
        
        int ans;
        
        if((long long) m*k>(long long)bloomDay.size()) return -1;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(bloomDay, mid, m, k)==1){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
        
    }
};