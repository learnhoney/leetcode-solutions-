class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int i=0, j=0; 
        double median;
        vector<int> res;
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                res.push_back(nums1[i]);
                i++;
            }else{
                res.push_back(nums2[j]);
                j++;
                }
        }
        while (i < n) {
            res.push_back(nums1[i]);
            i++;
        }
        while (j < m) {
            res.push_back(nums2[j]);
            j++;
        }
        
        if(res.size()%2==0){
            median=(res[res.size()/2 -1] +res[res.size()/2 ])/2.0;
        }else{
            median=res[res.size()/2];
            }
        return median;
    }
    
};