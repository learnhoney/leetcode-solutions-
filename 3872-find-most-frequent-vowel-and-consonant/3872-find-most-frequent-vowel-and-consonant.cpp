class Solution {
public:
    int maxFreqSum(string s) {
        map<char, int> hmv;
        map<char, int> hmc;
        int mcv;
        int mcc;
        for(auto const& c : s){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                hmv[c]++;
                if(hmv[c] > mcv) mcv = hmv[c];
            }else{
                hmc[c]++;
                if(hmc[c] > mcc) mcc = hmc[c];
            }
        }
    
    return mcv + mcc;
        
    }
};