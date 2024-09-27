class Solution {
public:
    typedef pair<char, int> p;
    struct lambda{
        bool operator()(p &p1,p &p2){
            return p1.second<p2.second; 
        }
    };

    string frequencySort(string s) {
        priority_queue<p, vector<p>, lambda> pq;

        unordered_map<char, int> mp;
        for(char &ch: s){
            mp[ch]++;
        }
        for(auto& it:mp){
            pq.push({it.first, it.second});
        }
        string res="";

        while(!pq.empty()){
            p temp=pq.top();
            pq.pop();
            res+=string(temp.second , temp.first); //n or size of string , string chars ex. ee then r then t =eert
        }
        return res;
    }
};
//priority que mei rakho count of chars and chars jo mila hmmei hashmap se jismei hmne count ++ kiya fir result string mei tempoaray var use krke usko insert krdiya......already sorted by no. aaya kyunki priority queue max hheap thi to count greator to smaller tha