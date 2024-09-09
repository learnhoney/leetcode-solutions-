class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long int tsum=0;
        tsum=accumulate(chalk.begin(),chalk.end(),tsum);
        k= k% tsum ;
        for(int i=0; i<chalk.size(); i++){
            k-= chalk[i];
            if(k<0){
                return i; 
            }
                }
        return 0;
    }
};


