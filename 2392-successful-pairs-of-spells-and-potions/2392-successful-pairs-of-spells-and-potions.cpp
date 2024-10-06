class Solution {
public:
    int bslowerbound(int spell, vector<int>& potions, long long passing, int m){
        int low = 0, high = m - 1;
        int passcnt = 0;
        while(low <= high){
            int mid = (low + high) / 2;
            long long prod = (long long) spell * (long long) potions[mid];

            if(prod >= passing){
                passcnt = m - mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return passcnt;
    }

    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long passing){
        int n = spells.size();
        int m = potions.size();
        vector<int> pairs;

        sort(potions.begin(), potions.end());

        for(int i = 0; i < n; i++){

            int passcnt = bslowerbound(spells[i], potions, passing, m);
            pairs.push_back(passcnt);
        }
        return pairs;
    }
};