class Solution {
public:
    static bool comparator(int aa, int bb){  //static so it can be called without instance 
        string a=to_string(aa);
        string b=to_string(bb);
        if((a+b) > (b+a)){
            return true;     //a+b > b+a concat ex 349 934
            }
        return false;
        }


    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),comparator);
        if(nums[0]==0){
            return "0";
        }
        string ans="";
        for(int num : nums){
            ans+=to_string(num);
        }
    return ans;
    }

};