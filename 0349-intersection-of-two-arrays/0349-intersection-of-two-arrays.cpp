class Solution {
public:

int bs(vector<int> &nums2, int low, int high, int k){

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(nums2[mid] == k){
                return mid;
            }else if(nums2[mid] < k){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return -1;
    }
    
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> res_vec;
        for(int i = 0; i < nums1.size(); i++){
            int k = nums1[i];

            //int bs_no = bs( nums2.begin(), nums2.end(), nums1[i]);

            if(i > 0 && nums1[i] == nums1[i - 1]){
                continue;
            }

            if( bs(nums2, 0, nums2.size() - 1, nums1[i]) != -1 ){
                res_vec.push_back(nums1[i]);
            }
        }
        return res_vec;
    }

};